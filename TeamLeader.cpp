#include "TeamLeader.h"

const float TeamLeader::coeff = 1.2;

TeamLeader::TeamLeader(std::string _firstName, std::string _secondName, std::string _email)  {
	firstName = _firstName;
	secondName = _secondName;
	email = _email;
}


TeamLeader::~TeamLeader() {
	for (std::list<Developer*>::iterator i = team.begin(); i != team.end(); ++i) {
		(*i)->setBoss(NULL);
	}
	if (boss != NULL) {
		boss->leaveTeam(this);
	}
}

std::string TeamLeader::getInfo() {
	std::string str = "error";
	if (boss == NULL) {
		str = getFirstName() + " " + getSecondName() + " (" + getEmail() + ")";
	}
	else {
		str = getFirstName() + " " + getSecondName() + " (" + getEmail() + ") boss: " + boss->getInfo();
	}
	return str;
}

int TeamLeader::getSalary() { return salary; }
void TeamLeader::setSalary(int _salary) { salary = _salary; }

void TeamLeader::calculateSalary() {
	setSalary((int)(workTime * coeff));
}

void TeamLeader::setBoss(Manager* _boss) {
	boss = _boss;
	boss->addToTeam(this);
}

void TeamLeader::addToTeam(Developer* developer) {
	team.push_front(developer);
}

void TeamLeader::leaveTeam(Developer* developer) {
	for (std::list<Developer*>::iterator i = team.begin(); i != team.end(); ++i) {
		if (*i == developer) {
			team.erase(i);
			break;
		}
	}
}

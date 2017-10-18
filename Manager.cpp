#include "Manager.h"

const float Manager::coeff = 1.5;

Manager::Manager(std::string _firstName, std::string _secondName, std::string _email) {
	firstName = _firstName;
	secondName = _secondName;
	email = _email;
}

Manager::~Manager() {
	for (std::list<TeamLeader*>::iterator i = team.begin(); i != team.end(); ++i) {
		(*i)->setBoss(NULL);
	}
}

std::string Manager::getInfo() {
	return getFirstName() + " " + getSecondName() + " (" + getEmail() + ")";
}

int Manager::getSalary() { return salary; }
void Manager::setSalary(int _salary) { salary = _salary; }

void Manager::calculateSalary() {
	setSalary((int)(workTime * coeff));
}

void Manager::addToTeam(TeamLeader* teamLeader) {
	team.push_front(teamLeader);
}

void Manager::leaveTeam(TeamLeader* teamLeader) {
	for (std::list<TeamLeader*>::iterator i = team.begin(); i != team.end(); ++i) {
		if (*i == teamLeader) {
			team.erase(i);
			break;
		}
	}
}
#include "Developer.h"

const float Developer::coeff = 1;

Developer::Developer(std::string _firstName, std::string _secondName, std::string _email) {
	firstName = _firstName;
	secondName = _secondName;
	email = _email;
}

Developer::~Developer() {
	if (boss != NULL) {
		boss->leaveTeam(this);
	}
}

std::string Developer::getInfo() {
	std::string str = "error";
	if (boss == NULL) {
		str = getFirstName() + " " + getSecondName() + " (" + getEmail() + ")";
	}
	else {
		str = getFirstName() + " " + getSecondName() + " (" + getEmail() + ") boss: " + boss->getFirstName() + " " + boss->getSecondName();
	}
	return str;
}

int Developer::getSalary() { return salary; }
void Developer::setSalary(int _salary) { salary = _salary; }

void Developer::calculateSalary() {
	setSalary((int)(workTime * coeff));
}

void Developer::setBoss(TeamLeader* _boss) {
	boss = _boss;
	boss->addToTeam(this);
}
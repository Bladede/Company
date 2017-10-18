#include "Company.h"

Company::Company() {

}

Company::~Company() {

}

Manager* Company::addManager(Manager manager) {
	mangos.push_front(manager);
	return &(mangos.front());
}

TeamLeader* Company::addTeamLeader(TeamLeader teamLeader) {
	temders.push_front(teamLeader);
	return &(temders.front());
}

Developer* Company::addDeveloper(Developer developer) {
	devers.push_front(developer);
	return &(devers.front());
}

void Company::setBoss(Developer* developer, TeamLeader* teamLeader) {
	developer->setBoss(teamLeader);
	teamLeader->addToTeam(developer);
}

void Company::setBoss(TeamLeader* teamLeader, Manager* manager) {
	teamLeader->setBoss(manager);
	manager->addToTeam(teamLeader);
}
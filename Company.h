#pragma once

#include "Manager.h"

#include <list>

class Manager;
class TeamLeader;
class Developer;

class Company
{
private:
	std::list<Manager> mangos;
	std::list<TeamLeader> temders;
	std::list<Developer> devers;
public:
	Company();
	~Company();
	
	Manager* addManager(Manager manager);
	TeamLeader* addTeamLeader(TeamLeader teamLeader);
	Developer* addDeveloper(Developer developer);
	void setBoss(Developer* developer, TeamLeader* teamLeader);
	void setBoss(TeamLeader* teamLeader, Manager* manager);
};


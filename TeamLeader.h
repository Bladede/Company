#pragma once

#include "IPerson.h"
#include "IWorker.h"
#include "Someone.h"

#include "Developer.h"
#include "Manager.h"

#include <list>

class Developer;
class Manager;
class TeamLeader : public IPerson, public IWorker, public Someone
{
private:
	static const float coeff;
	std::list<Developer*> team;
	Manager* boss = NULL;

public:
	TeamLeader(std::string _firstName, std::string _secondName, std::string _email);
	~TeamLeader();

	std::string getInfo();
	int getSalary();

	void setSalary(int _salary);
	void calculateSalary();

	void setBoss(Manager* _boss);
	void addToTeam(Developer* developer);
	void leaveTeam(Developer* developer);
};


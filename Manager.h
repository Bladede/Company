#pragma once

#include "IPerson.h"
#include "IWorker.h"
#include "Someone.h"

#include "TeamLeader.h"

#include <list>

class TeamLeader;
class Manager : public IPerson, public IWorker, public Someone
{
private:
	static const float coeff;
	std::list<TeamLeader*> team;

public:
	Manager(std::string _firstName, std::string _secondName, std::string _email);
	~Manager();

	std::string getInfo();
	int getSalary();

	void setSalary(int _salary);
	void calculateSalary();

	void addToTeam(TeamLeader* teamLeader);
	void leaveTeam(TeamLeader* teamLeader);
};


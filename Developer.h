#pragma once

#include "IPerson.h"
#include "IWorker.h"
#include "Someone.h"

#include "TeamLeader.h"

class TeamLeader;
class Developer : public IPerson, public IWorker, public Someone
{
private:
	static const float coeff;
	TeamLeader* boss = NULL;
public:
	Developer(std::string _firstName, std::string _secondName, std::string _email);
	~Developer();

	std::string getInfo();
	int getSalary();

	void setSalary(int _salary);
	void calculateSalary();

	void setBoss(TeamLeader* _boss);
};


#include "Company.h"

#include <iostream>

int main() {
	Company partyHard;

	Manager* man = partyHard.addManager(Manager("Man", "Ager", "manager1703@mail.ig"));
	std::cout << "top manager: " << man->getInfo() << std::endl;

	TeamLeader* lead = partyHard.addTeamLeader(TeamLeader("Alex", "Pono", "ponalex@mail.ru"));
	partyHard.setBoss(lead, man);
	std::cout << "teamLead: " << lead->getInfo() << std::endl;

	Developer* dev = partyHard.addDeveloper(Developer("Slava", "Shilov", "slavik@mail.ja"));
	partyHard.setBoss(dev, lead);
	std::cout << "proger: " << dev->getInfo() << std::endl;

	dev = partyHard.addDeveloper(Developer("Sveta", "Sokolova", "kolmar19@mail.ja"));
	partyHard.setBoss(dev, lead);
	std::cout << "proger: " << dev->getInfo() << std::endl;

	dev = partyHard.addDeveloper(Developer("Egor", "Smirnov", "homesitter@mail.ja"));
	partyHard.setBoss(dev, lead);
	std::cout << "proger: " << dev->getInfo() << std::endl;

	///////
	lead->setWorkTime(100);
	man->setWorkTime(70);

	IWorker* worker = lead;
	worker->calculateSalary();
	std::cout << lead->getFirstName() << " salary: " << worker->getSalary() << std::endl;
	worker = man;
	worker->calculateSalary();
	std::cout << man->getFirstName() << " salary: " << worker->getSalary() << std::endl;

	std::cout << "Press enter to exit." << std::endl;
	std::getchar();
	return 0;
}
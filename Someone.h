#pragma once

#include <string>

class Someone {
	
protected:
	std::string firstName;
	std::string secondName;

	std::string email;

	int workTime;
	int salary;

public:
	std::string getFirstName() { return firstName; };
	std::string getSecondName() { return secondName; };
	std::string getEmail() { return email; };
	int setSalary() { return salary; };

	void setFirstName(std::string str) { firstName = str; };
	void setSecondName(std::string str) { secondName = str; };
	void setEmail(std::string str) { email = str; };
	void setSalary(int _salary) { salary = _salary; };
	void setWorkTime(int _workTime) { workTime = _workTime; };
};
#pragma once

class IWorker {
public:
	virtual int getSalary() = 0;
	virtual void setSalary(int _salary) = 0;
	virtual void calculateSalary() = 0;
};
#pragma once

#include <string>

class IPerson {
public:
	virtual ~IPerson() {}

	virtual std::string getInfo () = 0;
};
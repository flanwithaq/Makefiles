#pragma once

#include <string>
#include <iostream>

class Simple {
public:
	Simple(std::string, int);

	std::string getName() { return name; }
	int getAge() { return age; }
private:
	std::string name;
	int age;
};

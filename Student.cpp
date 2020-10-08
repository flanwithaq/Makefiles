#include "Student.h"
#include <iostream>

Student::Student() {
	std::cout << "Enter your name";
	getline(std::cin, name);
	std::cout << "Enter your ID: ";
	std::cin >> id;
}
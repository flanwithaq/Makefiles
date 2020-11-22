#include <iostream>
#include "Simple.h"

int main() {
	std::cout << "Experimenting with Makefiles" << std::endl;
	Simple* simplePtr = new Simple("Anton", 19);

	std::cout << "Name: " << simplePtr->getName() << std::endl;
	std::cout << "Age: " << simplePtr->getAge() << "\n" << std::endl;

	return 0;
}

/*
Author: Anton Koetzler-Faust
Date: 2020/10/30

This program is meant to be a demonstration
to create a very simple Makefile.
*/

#include <iostream>
#include "User.h"

int main()
{
	User* Anton = new User("Anton", 19);
	Anton->displayInformation();

	return 0;
}

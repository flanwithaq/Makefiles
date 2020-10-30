#pragma once

#include <iostream>

class User
{
public:
  User(std::string, int);

  void displayInformation()
  {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
  }
private:
  std::string name;
  int age;
};

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student {
 public:
  Student(std::string, int);
 private:
  std::string name;
  int age;
};

#endif

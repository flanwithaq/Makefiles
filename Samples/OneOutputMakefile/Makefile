CXX= g++
CXXVERSION= -std=c++11

all: program
	rm *.o

program: main.o Student.o
	$(CXX) $(CXXVERSION) -o program main.o Student.o

main.o: main.cpp
	$(CXX) $(CXXVERSION) -c main.cpp

Student.o: Student.cpp Student.h
	$(CXX) $(CXXVERSION) -c Student.cpp

.PHONY: clean
clean:
	rm program
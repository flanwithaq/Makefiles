INCLUDE:=include
SRC:=src

CXX=g++
CXXFLAGS=-std=c++11 -Wall -I$(INCLUDE)

all: a
	rm *.o

a: $(SRC)/*.cpp
	$(CXX) $(CXXFLAGS) -o a $(SRC)/*.cpp

.PHONY: clean
clean:
	rm *.o

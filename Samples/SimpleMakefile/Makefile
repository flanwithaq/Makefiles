# Make executable it will create
SimpleMakefile: main.o User.o
	g++ -o SimpleMakefile main.o User.o

# .o files needed to compile main .exe
main.o: main.cpp
	g++ -c main.cpp
User.o: User.cpp User.h
	g++ -c User.cpp

# Clean all compilation files (phony rule clean)
.PHONY: clean
clean:
	rm *.o SimpleMakefile

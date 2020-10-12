# Make executable it will create
output: main.o student.o
	g++ main.o student.o -o output

# .o files needed to compile main .exe
main.o: main.cpp
	g++ -c main.cpp
student.o: Student.cpp Student.o
	g++ -c Student.cpp
clean:
	rm *.o output

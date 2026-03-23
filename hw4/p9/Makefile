all: main.cpp grade.o
	c++ main.cpp grade.o
grade.o: grade.cpp grade.h
	c++ -c grade.cpp
clean:
	rm -f a.out *.c~ *.o*
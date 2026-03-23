all: main.cpp branch.o
	c++ main.cpp branch.o
branch.o: branch.cpp branch.h
	c++ -c branch.cpp
clean:
	rm -f a.out *.c~ *.o*
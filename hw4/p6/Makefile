all: main.cpp decompose.o
	c++ main.cpp decompose.o

decompose.o: decompose.cpp decompose.h
	c++ -c decompose.cpp

clean:
	rm -f a.out *.c~ *.o*

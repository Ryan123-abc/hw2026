all: main.cpp operator.o
	c++ main.cpp operator.o
operator.o: operator.cpp operator.h
	c++ operator.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
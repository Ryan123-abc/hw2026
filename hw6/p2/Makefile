all: main.cpp prime_number.o
	g++ main.cpp prime_number.o
prime_number.o: prime_number.cpp prime_number.h
	g++ -c prime_number.cpp
clean:
	rm -f *.o *~ *.*~ a.out
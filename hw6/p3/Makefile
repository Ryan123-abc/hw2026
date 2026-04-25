all: main.cpp contacts.o
	g++ main.cpp contacts.o
contacts.o: contacts.cpp contacts.h
	g++ -c contacts.cpp
clean:
	rm -f *.o *~ *.*~ a.out
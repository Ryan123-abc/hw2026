all: main.cpp container.o
	g++ main.cpp container.o
container.o: container.cpp container.h
	g++ -c container.cpp
clean:
	rm -f *.o *~ *.*~ a.out
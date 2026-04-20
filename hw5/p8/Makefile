all: main.cpp bird.o
	g++ main.cpp bird.o
bird.o: bird.cpp bird.h
	g++ -c bird.cpp
clean:
	rm -f *.o *~ *.*~ a.out
all: main.cpp trim.o
	g++ main.cpp trim.o
trim.o: trim.cpp trim.h
	g++ -c trim.cpp
clean:
	rm -f *.o *~ *.*~ a.out
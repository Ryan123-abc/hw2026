all: main.cpp str_addr.o
	g++ main.cpp str_addr.o
str_addr.o: str_addr.cpp str_addr.h
	g++ -c str_addr.cpp
clean:
	rm -f *.o *~ *.*~ a.out 
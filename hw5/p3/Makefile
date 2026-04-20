all: main.cpp phone_number.o
	g++ main.cpp phone_number.o
phone_number.o: phone_number.cpp phone_number.h
	g++ -c phone_number.cpp
clean:
	rm -f *.o *~ *.*~ a.out 
all: main.cpp tourist.o flight.o vip_tourist.o
	c++ main.cpp tourist.o flight.o vip_tourist.o
vip_tourist.o: vip_tourist.cpp vip_tourist.h tourist.h flight.h
	c++ vip_tourist.cpp -c
tourist.o: tourist.cpp tourist.h flight.h
	c++ tourist.cpp -c
flight.o: flight.cpp flight.h
	c++ flight.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
all: main.cpp bank.o bank.h
	c++ main.cpp bank.o
bank.o: bank.cpp bank.h
	c++ bank.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
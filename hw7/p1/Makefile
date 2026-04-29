all: main1.cpp main2.cpp bank.o bank.h
	c++ main1.cpp bank.o -o a.out-1
	c++ main2.cpp bank.o -o a.out-2
bank.o: bank.cpp bank.h
	c++ bank.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
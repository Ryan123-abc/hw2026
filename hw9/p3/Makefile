all: main.cpp bank.o saving_account.o bank.h saving_account.h
	c++ main.cpp bank.o saving_account.o
saving_account.o: bank.h saving_account.cpp saving_account.h
	c++ saving_account.cpp -c
bank.o: bank.cpp bank.h
	c++ bank.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
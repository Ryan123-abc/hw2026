all: main.cpp calculator.o
	c++ main.cpp calculator.o
calculator.o: calculator.cpp calculator.h
	c++ -c calculator.cpp
clean:
	rm -f a.out *.c~ *.o*
all: main.cpp palindrome.o
	g++ main.cpp palindrome.o
palindrome.o: palindrome.cpp palindrome.h
	g++ -c palindrome.cpp
clean:
	rm -f *.o *~ *.*~ a.out 
all: main.cpp term_score.o
	g++ main.cpp term_score.o
term_score.o: term_score.cpp term_score.h
	g++ -c term_score.cpp
clean:
	rm -f *.o *~ *.*~ a.out 
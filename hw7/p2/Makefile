all: main.cpp student.o
	c++ main.cpp student.o
student.o: student.cpp student.h
	c++ student.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
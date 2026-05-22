all: main.cpp student.o foreign_student.o person.o
	c++ main.cpp student.o foreign_student.o person.o
foreign_student.o: foreign_student.cpp foreign_student.h student.h person.h
	c++ foreign_student.cpp -c
student.o: student.cpp student.h person.h
	c++ student.cpp -c
person.o: person.cpp person.h
	c++ person.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
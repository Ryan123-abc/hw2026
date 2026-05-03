all: main.cpp credits.o calculator.o course.o
	c++ main.cpp credits.o calculator.o course.o
calculator.o: calculator.cpp calculator.h
	c++ -c calculator.cpp
credits.o: credits.cpp credits.h credits.h course_category.h
	c++ -c credits.cpp
course.o: course.cpp course.h
	c++ -c course.cpp
clean:
	rm -f *.o *~ *.*~ a.out

all: main.cpp student.o employee.o student_employee.o
	c++ main.cpp student.o employee.o student_employee.o
student_employee.o: student_employee.cpp student_employee.h student.h employee.h
	c++ student_employee.cpp -c
employee.o: employee.cpp employee.h
	c++ employee.cpp -c
student.o: student.cpp student.h
	c++ student.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
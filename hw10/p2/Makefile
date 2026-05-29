all: main.cpp ShowAllInfo.o LocalParttimeStudent.o LocalStudent.o ForeignStudent.o Student.o
	c++ main.cpp ShowAllInfo.o LocalParttimeStudent.o LocalStudent.o ForeignStudent.o Student.o
ShowAllInfo.o: ShowAllInfo.cpp ShowAllInfo.h LocalParttimeStudent.h LocalStudent.h ForeignStudent.h Student.h
	c++ -c ShowAllInfo.cpp
LocalParttimeStudent.o: LocalParttimeStudent.cpp LocalParttimeStudent.h LocalStudent.h ForeignStudent.h Student.h
	c++ -c LocalParttimeStudent.cpp
LocalStudent.o: LocalStudent.cpp LocalStudent.h ForeignStudent.h Student.h
	c++ -c LocalStudent.cpp
ForeignStudent.o: ForeignStudent.cpp ForeignStudent.h Student.h
	c++ -c ForeignStudent.cpp
Student.o: Student.cpp Student.h
	c++ -c Student.cpp
clean:
	rm -f *.o *~ *.*~ a.out*
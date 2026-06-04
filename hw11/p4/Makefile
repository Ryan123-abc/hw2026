all: main.cpp kanban.o
	c++ main.cpp kanban.o
kanban.o: kanban.cpp kanban.h
	c++ kanban.cpp -c
clean:
	rm -f *.o *~ *.*~ a.out*
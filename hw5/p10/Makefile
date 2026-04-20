all: main.cpp fruit_products.o
	g++ main.cpp fruit_products.o
fruit_products.o: fruit_products.cpp fruit_products.h
	g++ -c fruit_products.cpp
clean:
	rm -f *.o *~ *.*~ a.out
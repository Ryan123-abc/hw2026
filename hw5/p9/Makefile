all: main.cpp caesar_cipher_decode.o
	g++ main.cpp caesar_cipher_decode.o
caesar_cipher_decode.o: caesar_cipher_decode.cpp caesar_cipher_decode.h
	g++ -c caesar_cipher_decode.cpp
clean:
	rm -f *.o *~ *.*~ a.out
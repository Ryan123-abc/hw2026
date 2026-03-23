#include"decompose.h"

int int_part(double x){
	return (int)x;
}

double float_part(double x){
	return x - (int)x;
}

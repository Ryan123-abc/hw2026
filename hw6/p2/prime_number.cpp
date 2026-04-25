#include"prime_number.h"

bool isPrime(int num){
	if(num<2){
		return false;
	}
	for(int i=2; i*i<=num; i++){
		if(num%i == 0){
			return false;
		}
	}
	return true;
}

void allocate_for_prime_num(int **ptr, int n){
	*ptr = new int[n];

	int count = 0;
	int num = 2;

	while(count<n){
		if(isPrime(num)){
			(*ptr)[count] = num;
			count++;
		}
		num++;
	}
}

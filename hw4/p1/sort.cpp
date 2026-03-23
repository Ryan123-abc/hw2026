#include<iostream>
using namespace std;

int main(){
	int a[10];

	cout << "Please input 10 numbers: ";
	for(int i=0; i<10; i++){
		cin >> a[i];
	}

	for(int i=0; i<9; i++){
		for(int j=0; j<9-i; j++){
			if(a[j]<a[j+1]){
				int temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	cout << "The numbers are sorted as follows: " << endl;
	for(int i=0; i<10; i++){
		if(i==9){
			cout << a[i] << endl;
			return 0;
		}
		cout << a[i] << " ";
	}
}

			

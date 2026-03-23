#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	string target = "1234";

	cout << "Please input a 4-digits number: ";
	cin >> a;

	for(int i=0; i<4; i++){
		for(int j=i+1; j<4; j++){
			if(a[i]==a[j]){
				cout << "Duplicated numbers!" << endl;
				return 0;
			}
		}
	}

	int A=0, B=0;

	for(int i=0; i<4; i++){
		if(a[i]==target[i]){
			A++;
		}
	}

	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(i!=j && a[i]==target[j]){
				B++;
			}
		}
	}

	cout << "Checking a Result: " << A << "A" << B << "B" << endl;
}

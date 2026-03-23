#include<iostream>
using namespace std;

int main(){
	int a;
	cout << "Please input a number: ";
	cin >> a;
	cout << "=======================" << endl;
	cout << "decimal: \t" << dec << left << a << endl;
	cout << "octal:  \t0" << oct << left << a << endl;
	cout << "hexdecimal: \t0x" << uppercase << hex << left << a << endl;
	cout << "=======================" << endl;
	}



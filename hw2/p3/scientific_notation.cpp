#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double a;
	cout << "Please input a floating-point number: ";
	cin >> a;
	cout << "The number can be represented in scientific notation as " << scientific << setprecision(5) << a << "." << endl;
	}

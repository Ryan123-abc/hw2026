#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double a, b;
	cout << "Please input the first floating-point number: ";
	cin >> a;
	cout << "Please input the second floating-point number: ";
	cin >> b;
	cout << "  " << setw(12) << setfill('0') << fixed << setprecision(6) << a << endl;	
	cout << "+)" << setw(12) << setfill('0') << fixed << setprecision(6) << b << endl;
	cout << "--------------" << endl;
	double sum = a+b;
	cout << "  " << setw(12) << setfill('0') << fixed << setprecision(6) << sum << endl;	
	}

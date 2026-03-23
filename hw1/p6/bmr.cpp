#include<iostream>
using namespace std;

int main(){
	double a;
	int b, c;
	cout << "weight(kg): ";
	cin >> a;
	cout << "height(cm): ";
	cin >> b;
	cout << "age: ";
	cin >> c;
	cout << "bmr for male: " << 88.362+(13.397*a)+(4.8*b)-(5.67*c) << " kcal/day\n";
	cout << "bmr for female: " << 447.593+(9.247*a)+(3.098*b)-(4.33*c) << " kcal/day\n";
}

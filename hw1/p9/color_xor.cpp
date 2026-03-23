#include<iostream>
using namespace std;

int main(){
	int r, g, b;
	cout << "R=? ";
	cin >> r;
	cout << "G=? ";
	cin >> g;
	cout << "B=? ";
	cin >> b;
	cout << "Color(" << r << ", " << g << ", " << b << ") XOR Color(128, 128, 128)=Color(" << (r^128) << ", " << (g^128) << ", " << (b^128) << ")\n";
	}

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a;
	cout << "width=? ";
	cin >> a;
	cout.fill('*');
	cout << setw(a) << right << "xyz" << endl;
	cout << setw(a) << left << "abcd" << endl;
	}

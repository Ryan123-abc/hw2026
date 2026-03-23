#include<iostream>
using namespace std;

int main(){
	char a;
	int b;
	cout << "Enter the starting letter: ";
	cin >> a;
	cout << "Enter the number of positions to shift: ";
	cin >> b;
	cout << b << " letters after " << a << " is " << (char)((a-'a'+b)%26+'a') <<endl;
	}

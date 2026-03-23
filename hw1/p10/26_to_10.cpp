#include<iostream>
using namespace std;

int main(){
	string a;
	cin >> a;
	cout << "(" << a << ")_26=(" << (a[0]-'a')*26+(a[1]-'a') << ")_10\n";
	}

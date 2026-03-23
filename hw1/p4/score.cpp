#include<iostream>
using namespace std;

int main(){
	double a, b, c;
	cout << "作業成績: ";
	cin >> a;
	cout << "期中考成績: ";
	cin >> b;
	cout << "期末考成績: ";
	cin >> c;
	cout << "學期成績為 " << a*0.3+b*0.3+c*0.4 << " 分\n";
}

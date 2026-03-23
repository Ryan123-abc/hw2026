#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int a;
	cout << "width=? ";
	cin >> a;
	int right = (ceil)((a-3)/2.0);
	cout.fill('*');
	cout << setw(a-right) << "xyz" << setw(right) << "" << endl;
}

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a;
	cout << "Please input the electricity usage: ";
	cin >> a;
	double m1=0, m2=0;
	if(a==0){
		cout << "Error!" << endl;
		return 0;
	}
	if(a>1001){
		m1+=(a-1001+1)*8.86;
		m2+=(a-1001+1)*7.03;
		a=1000;
	}
	if(a>701){
		m1+=(a-701+1)*6.44;
		m2+=(a-701+1)*5.27;
		a=700;
	}
	if(a>501){
		m1+=(a-501+1)*5.14;
		m2+=(a-501+1)*4.24;
		a=500;
	}
	if(a>331){
		m1+=(a-331+1)*3.8;
		m2+=(a-331+1)*3.13;
		a=330;
	}
	if(a>121){
		m1+=(a-121+1)*2.55;
		m2+=(a-121+1)*2.26;
		a=120;
	}
	if(a>0){
		m1+=a*1.78;
		m2+=a*1.78;
	}
	cout << fixed << setprecision(2);
	cout << "summer month bill: "<< m1 << endl;
	cout << "non-summer month bill: "<< m2 <<endl;
}

#include<iostream>
using namespace std;

int main(){
	double a;
	int b, c;
	cout << "請輸入距離(公里): ";
	cin >> a;
	cout << "請輸入時間\n" << "> 分: ";
	cin >> b;
	cout << "> 秒: ";
	cin >> c;
	cout << "您的配速為每公里 " << ((int)((b*60+c)/a))/60 << " 分 " << (int)((b*60+c)/a)%60 << " 秒\n";
}


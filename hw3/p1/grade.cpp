#include<iostream>
using namespace std;

int main(){
	int s;
	cout << "請輸入分數: ";
	cin >> s;
	if((s>100)||(s<0)){
		cout << "這啥阿" << endl;
		return 0;
	}
	if((s>=90)&&(s<=100)){
		cout << "A" << endl;
	}else if((s>=80)&&(s<=89)){
		cout << "B" << endl;
	}else if((s>=70)&&(s<=79)){
		cout << "C" << endl;
	}else if((s>=60)&&(s<=69)){
		cout << "D" << endl;
	}else if((s>=0)&&(s<=59)){
		cout << "F" << endl;
	}
}
    

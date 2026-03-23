#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cout << "Please input your card number: ";
	cin >> s;

	int sum=0;

	for(int i=0; i<15; i++){
		int num = s[i] - '0';
		if(i%2==0){
			num *= 2;
			if(num>=10){
				num-=9;
			}
		}
		sum += num;
	}

	sum += (s[15] - '0');

	if(sum%10 != 0){
		cout << "Invalid Card!" << endl;
		return 0;
	}

	string issuer;
	if(s[0] == '4'){
        issuer = "Visa";
    }
    else if(s.substr(0,2) >= "50" && s.substr(0,2) <= "55"){
        issuer = "Mastercard";
    }
    else if(s.substr(0,4) >= "3528" && s.substr(0,4) <= "3589"){
        issuer = "JCB";
    }
    else{
        issuer = "none of Visa, Mastercard and JCB";
    }
	
	cout << "The card number [" << s.substr(0,4) << "-" << s.substr(4,4) << "-" << s.substr(8,4) << "-" << s.substr(12,4) << "] is valid, and its card issuer is " << issuer << "." << endl;
	
	return 0;
}

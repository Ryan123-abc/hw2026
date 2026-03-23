#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "n=? ";
	cin >> n;
	if(n<=0){
		cout << "Error!!!" << endl;
		return 0;
	}
	
	int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }

    if(n == 1){
        cout << "1=1." << endl;
    }
    else if(n == 2){
        cout << "1+2=" << sum << "." << endl;
    }
    else if(n == 3){
        cout << "1+2+3=" << sum << "." << endl;
    }
    else if(n == 4){
        cout << "1+2+3+4=" << sum << "." << endl;
    }
    else{
        cout << "1+2+..." << "+" << n-1 << "+" << n << "=" << sum << "." << endl;
    }

}

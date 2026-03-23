#include<iostream>
using namespace std;

int main(){
	int new_r=1;
	int grow=0;
	int big=0;
	int all=1;
	int n;
	cout<<"Month: ";
	cin >> n;

	if(n<=0){
		cout << "Error!" << endl;
		return 0;
	}
	if(n==1){
		cout <<is 1 pairs of rabbits."<<endl;
		return 0;
	}
	for(int i=1; i<n; i++){
		big+=grow;
		grow=new_r;
		new_r=big;
	}
	all=new_r+grow+big;

	cout << "Ther are "<< all <<" pairs of rabbits."<<endl;
	return 0;
}

		

#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Please input a number: ";
	cin >> n;
	if(n<=0){
		cout << "Error" << endl;
		return 0;
	}
	int count=0;
	int perfect[1024];
	int sum=0;
	for(int i=1; i<=n; i++){
		sum=0;
		for(int j=1; j<i; j++){
			if(i%j==0){
				sum += j;
			}
		}
		if(sum==i){
			perfect[count] = i; 
			count++;
		}
	}

	if(count==0){
		cout << "Perfect number was not found!" << endl;
		return 0;
	}
	if(count==1){
		cout << perfect[0] <<" is a perfect number." << endl;
		return 0;
	}else{
		for(int i=0; i<count; i++){
			if(i==count-1){
				cout << perfect[i] <<" are perfect numbers." << endl;
			}
			else if(i==count-2){
				cout << perfect[i] <<" and ";
			}
			else{
				cout << perfect[i] << ", ";
			}
		}
	}
	return 0;
}
		


#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int a[10];
	cout << "Input 10 scores: ";
	for(int i=0; i<10; i++){
		cin >> a[i];
	}
	for(int i=0; i<10; i++){
		if(a[i]>100){
	 		a[i]=100;
  		}
		if(a[i]<0){
  			a[i]=0;
  		}
	}

	for(int i=0; i<9; i++){
		for(int j=0; j<9-i; j++){
			if(a[j]<a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	int sum=0;
	for(int i=0; i<10; i++){
		sum += a[i];
	}
	int sum_6=0;
	for(int i=0; i<6; i++){
		sum_6 += a[i];
	}

	cout << "Max Score: " << a[0] << endl;
	cout << "Min Score: " << a[9] << endl;
	cout << "Average: " << fixed << setprecision(1) << floor(sum/10.0*10)/10 << endl;
	cout << "Average of the top 6 scores: " << (int)round(sum_6/6.0) << endl;}

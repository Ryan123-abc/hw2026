#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double sum=0;
	int n=1;
	int count=0;
	double score;

	while(1){
		cout << "Number #" << n << ": ";
		cin >> score;
		if(score==-1){
			break;
		}
		if(score<0 || score>100){
			cout << "Wrong Input! ";
			continue;
		}
		
		sum += score;
		n++;
		count++;
	}

	if(count==0){
		cout << "Average = 0" << endl;
	}else{
		double average = sum/count;
		average=((floor)(average*10))/10;
		cout << "Average = " << average << endl;
	}

	return 0;
}

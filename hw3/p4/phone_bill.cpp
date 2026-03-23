#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, mb;
	cin>>a>>mb;
	double m=0;

	switch(a){
		case 1:
			m=499;
			cout << m << endl;
			return 0;
		case 2:
			m=(round)(mb*0.52);
			cout << m << endl;
			return 0;
		case 3:
			if(mb>4096){
				m=(round)(299+(mb-4096)*0.25);
			}else{
				m=299;
			}
			cout << m << endl;
			return 0;
		default:
			cout<<"Error!"<<endl;
			return 0;
	}
}
	

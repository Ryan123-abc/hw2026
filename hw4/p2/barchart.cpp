#include<iostream>
using namespace std;

int main(){
	int a[7];
	cout << "Please input 7 numbers: ";
	for(int i=0; i<7; i++){
		cin >> a[i];
	}

	int p[10][7];
	for(int i=10; i>0; i--){
		for(int j=0; j<7; j++){
			if(a[j]>=i){
				if(j==6){
					cout << "#" << endl;
				}else{
					cout << "# ";
				}
			}else{
				if(j==6){
					cout << "." << endl;
				}else{
					cout << ". ";
				}
			}
		}
	}

	cout << "1 2 3 4 5 6 7" << endl;
}

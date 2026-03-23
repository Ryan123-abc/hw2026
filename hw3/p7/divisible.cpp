#include<iostream>
using namespace std;

int main(){
	int a, b;
	cout << "Please input two numbers(a b): ";
	cin >> a >> b;
	int arr[100];
	int count=0;
	for(int i=1; i<=100; i++){
		if((i%a==0)&&(i%b==0)){
			arr[count] = i;
			count++;
		}
	}
	
	if(count==0){
		cout << "None." << endl;
	}
	else {
        cout << "Numbers divisible by " << a << " and " << b << " are as follows: ";

        for(int i = 0; i < count; i++){
            if(count == 1){
                cout << arr[i];
            }
            else if(i == count - 1){
                cout << "and " << arr[i];
            }
            else if(i == count - 2){
                cout << arr[i] << " ";
            }
            else{
                cout << arr[i] << ", ";
            }
        }

        cout << "." << endl;
    }

    return 0;
}


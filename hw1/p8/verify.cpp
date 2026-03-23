#include<iostream>
#include<cmath>
using namespace std;

int main(){
    string a;
    cout << "Please input ID: ";
    cin >> a;

    int d1 = a[4]-'0';
    int d2 = a[3]-'0';
    int d3 = a[2]-'0';
    int d4 = a[1]-'0';
    int d5 = a[0]-'0';

    int check = (abs((d1+d2)*d3 - (d4+d5)*d5)/10)%10;

    cout << "The verification code of " << a << " is " << check << "." << endl;
}

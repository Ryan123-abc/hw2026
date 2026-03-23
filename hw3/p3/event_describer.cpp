#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char t, p, a;
    cin >> t >> p >> a;

    t = toupper(t);
    p = toupper(p);
    a = toupper(a);

    cout << "阿財";
	
	int flag=0;

    if (t == 'M')
        cout << "早上";
    else if (t == 'A')
        cout << "下午";
    else if (t == 'E')
        cout << "晚上";
    else{
		cout << "在錯誤的時間";
		flag=1;
	}

    if (p == 'S')
        cout << "在學校";
    else if (p == 'R')
        cout << "在餐廳";
    else if (p == 'G')
        cout << "在花園";
    else
		if(flag==1){
			cout << "與錯誤的地方";
		}else
        	cout << "在錯誤的地方";

    if (a == 'R')
        cout << "看書";
    else if (a == 'S')
        cout << "睡覺";
    else if (a == 'P')
        cout << "寫程式";
    else
        cout << "做錯誤的事";

    cout << endl;

    return 0;
}

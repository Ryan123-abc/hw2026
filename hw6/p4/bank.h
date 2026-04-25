#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
	string name;
	int balance;

public:
	BankAccount(string n){
		name = n;
		balance = 0;
	}

	void show_balance(){
		cout << name << "'s current balance: " << balance << endl;
	}
	void save(int money){
		balance += money;
		cout << name << " saved $" << money << endl;
	}
	void withdraw(int money){
		if(balance >= money){
			balance -= money;
			cout << name << " withdrew $" << money << endl;
		}else{
			cout << name << " doesn't have enough money to withdraw!" << endl;
		}
	}
	void transfer(int money, BankAccount &target){
		if(balance >= money){
			balance -= money;
			target.balance += money;

			cout << name << " transfered $" << money << " to " << target.name << "." << endl;
		}else{
			cout << name << " doesn't have enough money to transfer!" << endl;
		}
	}
};

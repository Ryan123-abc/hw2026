#include<iostream>
#include<string>
using namespace std;

class BankAccount{
public:
	
	string owner_name;
	int balance;

	BankAccount(string name);
	void show_balance();
	void save(int amount);
	void withdraw(int amount);
	void transfer(int amount, BankAccount &target);

};

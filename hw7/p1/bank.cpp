#include"bank.h"

BankAccount::BankAccount(string name){
	owner_name = name;
	balance = 0;
}

void BankAccount::show_balance(){
	cout << owner_name << "'s current balance: " << balance << endl;
}

void BankAccount::save(int amount){
	balance += amount;
	cout << owner_name << " saved $" << amount << endl;
}

void BankAccount::withdraw(int amount){
	if(balance >= amount){
		balance -= amount;
		cout << owner_name << " withdrew $" << amount << endl;
	}else{
		cout << owner_name << " doesn't have enough money to withdraw!" << endl;
	}
}

void BankAccount::transfer(int amount, BankAccount &target){
	if(balance >= amount){
		balance -= amount;
		target.balance += amount;
		cout << owner_name << " transfered $" << amount << " to " << target.owner_name << "." << endl;
	}else{
		cout << owner_name << " doesn't have enough money to transfer!" << endl;
	}
}

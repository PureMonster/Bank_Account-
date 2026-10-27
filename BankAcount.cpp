#include "BankAccount.h"
#include<iostream>
#include<string>
using namespace std;

void BankAccount::SetAccountnum(int num)
{
	AccountNum = num;
}

void BankAccount::SetDeposit(double num)
{
	Balance += num;
}

void BankAccount::SetWithdraw(double number)
{
	if (number <= Balance) {
		Balance -= number;
	}
	else
		cout << "Your Balance is not enough \n";
}

int BankAccount::GetAccountNum()
{
	return AccountNum;
}

void BankAccount::Setname(string n)
{
	name = n;
}

string BankAccount::Getname()
{
	return name;
}

void BankAccount::SetBalance(double num)
{
	Balance = num;
}

double BankAccount::GetBalance()
{
	return Balance;
}

BankAccount::BankAccount()
{
}
BankAccount::BankAccount(int num, string name, double Balance) : AccountNum(num), name(name), Balance(Balance)
{
}
BankAccount::~BankAccount()
{
}


int main() {
	BankAccount Acc1;
	Acc1.SetBalance(100);
	Acc1.Setname("farah");
	cout << "your balance is : " << Acc1.GetBalance()<< "\n";
	cout << "your name is : " << Acc1.Getname();

	return 0;
}
}

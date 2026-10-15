#include "BankAcount.h"
#include<iostream>
using namespace std;

void BankAcount::SetAccountnum(int num)
{
	AccountNum = num;
}

void BankAcount::SetDeposit(int num)
{
	Balance += num;
}

void BankAcount::SetWithdraw(double number)
{
	if (number <= Balance) {
		Balance -= number;
	}
	else
		cout << "Your Balance is not enough \n";
}

int BankAcount::GetAccountNum()
{
	return AccountNum;
}

void BankAcount::Setname(string n)
{
	name = n;
}

string BankAcount::Getname()
{
	return name;
}

void BankAcount::SetBalance(double num)
{
	Balance = num;
}

double BankAcount::GetBalance()
{
	return Balance;
}

BankAcount::BankAcount()
{

}
BankAcount::BankAcount(int num, string name, double Balance):AccountNum(num), name(name), Balance(Balance)
{
}
BankAcount::~BankAcount()
{
}
int main() {
	BankAcount Acc1 ;
	Acc1.SetBalance(100);
	Acc1.Setname("farah");
	cout << "your balance is : " << Acc1.GetBalance();
	cout << "your name is : " << Acc1.Getname();
	
	return 0;
}
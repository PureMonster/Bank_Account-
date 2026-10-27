#pragma once
#include <string>
#include <iostream>
using namespace std;
class BankAccount
{
private:
	int AccountNum;
	string name;
	double Balance;

public:
	void SetAccountnum(int num);
	void SetDeposit(double num);
	void SetWithdraw(double num);
	int GetAccountNum();
	void Setname(string num);
	string Getname();
	void SetBalance(double num);
	double GetBalance();
	BankAccount();
	BankAccount(int num, string name, double balance);
	~BankAccount();
};

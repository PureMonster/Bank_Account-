#pragma once
# include <string>;
#include <iostream>;
class BankAcount
{
private : 
	int AccountNum;
	string name;
	double Balance;

public : 
	void SetAccountnum(int num);
	void SetDeposit(int num);
	void SetWithdraw(double num);
	int GetAccountNum();
	void Setname(string num);
	string Getname();
	void SetBalance(double num);
	double GetBalance();
	BankAcount();
	BankAcount(int AN ,string HN , double B);
	~ BankAcount();
};
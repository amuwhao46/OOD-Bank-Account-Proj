//
//  SavingsAccountImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "SavingsAccount.h"
using namespace std;

double savingsAccount::getInterestRate()
{
    return interest;
}

void savingsAccount::setInterestRate(double rate)
{
    interest = rate;
}

void savingsAccount::finalInt()
{
    balance = balance + (balance * interest);
}

void savingsAccount::statement()
{
    finalInt();
}

void savingsAccount::print()
{
    cout << "Account Number: " << getAccountNumber() << endl;
    cout << "Name on Savings Account: " << getName() << endl;
    cout << "Balance in Savings Account: " << getBalance() << endl;
}

savingsAccount::savingsAccount(string name, int num, double accBal): bankAccount(name, num, accBal)
{
    interest = INT_RATE;
}

savingsAccount::savingsAccount(string name, int num, double accBal, double intRate): bankAccount(name, num, accBal)
{
    setInterestRate(intRate);
}

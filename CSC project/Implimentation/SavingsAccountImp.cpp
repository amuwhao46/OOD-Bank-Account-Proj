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

void savingsAccount::finalInterest()
{
    balance = balance + (balance * interest);
}

void savingsAccount::statement()
{
    finalInterest();
}

void savingsAccount::print()
{
    cout << "Name on Saving Account: " << getName() << endl;
    cout << "Account Number of User: " << getAccountNumber() << endl;
    cout << "Tot Balance in Account: " << getBalance() << endl;
}

savingsAccount::savingsAccount(string accName, int accNum, double accBalance) : bankAccount(accName, accNum, accBalance)
{
    interest = INT_RATE;
}

savingsAccount::savingsAccount(string accName, int accNum, double accBalance, double intRate): bankAccount(accName, accNum, accBalance)
{
    setInterestRate(intRate);
}

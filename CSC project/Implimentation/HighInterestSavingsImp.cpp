//
//  HighInterestSavingsImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "HighInterestSavings.h"
using namespace std;

double highInterestSavings::getMinBal()
{
    return minimumBalance;
}

bool highInterestSavings::testMinBal(double amount)
{
    return (balance - amount >= minimumBalance);
}

void highInterestSavings::withdraw(double amount)
{
    if (testMinBal(amount))
    {
        balance = balance - amount;
    }
}

void highInterestSavings::print()
{
    cout << "High- Interest Savings: " << getName() << endl;
    cout << "Account Number of User: " << getAccountNumber() << endl;
    cout << "Tot Balance in Account: " << getBalance() << endl;
}

highInterestSavings::highInterestSavings(string accName, int accNum, double accBalance,    double intRate, double minBal):savingsAccount(accName, accNum, accBalance, intRate)
{
    minimumBalance = minBal;
}

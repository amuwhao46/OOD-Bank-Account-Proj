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

double highInterestSavings::getMinBalance()
{
    return minimumBalance;
}

bool highInterestSavings::verMinBalance(double amount)
{
    return (balance - amount >= minimumBalance);
}

void highInterestSavings::withdraw(double amount)
{
    if (verMinBalance(amount))
    {
        balance = balance - amount;
    }
}

void highInterestSavings::print()
{
    cout << "Account Number: " << getAccountNumber() << endl;
    cout << "Name under High Interest Savings: " << getName() << endl;
    cout << "Balance in High Interest Savings: " << getBalance() << endl;
}

highInterestSavings::highInterestSavings(string name, int num, double accBal): savingsAccount(name, num, accBal)
{
    minimumBalance = MIN_BALANCE;
}

highInterestSavings::highInterestSavings(string name, int num, double accBal,
                               double intRate, double minBalance): savingsAccount(name, num, accBal, intRate)
{
    minimumBalance = minBalance;
}

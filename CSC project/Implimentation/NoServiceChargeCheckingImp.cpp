//
//  NoServiceChargeCheckingImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "NoServiceChargeChecking.h"
using namespace std;

double noServiceCharge::getMinBalance()
{
    return minimumBalance;
}

void noServiceCharge::setMinBalance(double min)
{
    minimumBalance = min;
}

bool noServiceCharge::verMinBal(double amount)
{
    return (balance - amount >= minimumBalance);
}

void noServiceCharge::writeCheck(double amount)
{
    if (verMinBal(amount))
    {
        balance -= amount;
    }
}

void noServiceCharge::withdraw(double amount)
{
    if (verMinBal(amount))
    {
        balance -= amount;
    }
}

void noServiceCharge::print()
{
    cout << "No Ser Charge Checking: " << getName() << endl;
    cout << "Account Number of User: " << getAccountNumber() << endl;
    cout << "Tot Balance in Account: " << getBalance() << endl;
}

noServiceCharge::noServiceCharge(string n, int accNum, double accBal):checkingAccount(n,accNum,accBal)
{
    minimumBalance = MIN_BAL;
    interestRate = INT_RATE;
}

noServiceCharge::noServiceCharge(string accName, int accNum, double accBalance, double min, double interestRate):checkingAccount(accName, accNum, accBalance)
{
    minimumBalance = min;
    interestRate = interestRate;
}

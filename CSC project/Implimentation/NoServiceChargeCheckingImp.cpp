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

double noServiceChargeChecking::getMinimumBalance()
{
    return minimumBalance;
}

void noServiceChargeChecking::setMinimumBalance(double minimum)
{
    minimumBalance = minimum;
}

bool noServiceChargeChecking::verMinimumBal(double amount)
{
    return (balance - amount >= minimumBalance);
}

void noServiceChargeChecking::monthlyStatement()
{

}

void noServiceChargeChecking::writeCheck(double amount)
{
    if (verMinimumBal(amount))
    {
        balance -= amount;
    }
}

void noServiceChargeChecking::withdraw(double amount)
{
    if (verMinimumBal(amount))
    {
        balance -= amount;
    }
}

void noServiceChargeChecking::print()
{
    cout << "Account Number: " << getAccountNumber() << endl;
    cout << "Name under No Service Charge Checking: " << getName() << endl;
    cout << "Balance in No Service Charge Checking: " << getBalance() << endl;
}

noServiceChargeChecking::noServiceChargeChecking(string name, int num, double accBal): checkingAccount(name, num, accBal)
{
    minimumBalance = MIN_BAL;
    interestRate = INT_RATE;
}

noServiceChargeChecking::noServiceChargeChecking(string name, int num, double accBal, double minimum, double intRate): checkingAccount(name, num, accBal)
{
    minimumBalance = minimum;
    interestRate = intRate;
}

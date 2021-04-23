//
//  BankAccountImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "BankAccount.h"
using namespace std;

void bankAccount::print()
{
    cout << accNum << ":" << accName << " Total Account Balance: $" << balance;
}

int bankAccount::getAccountNumber()
{
    return accNum;
}

double bankAccount::getBalance()
{
    return balance;
}

string bankAccount::getName()
{
    return accName;
}

void bankAccount::setName(string name)
{
    accName = name;
}

void bankAccount::makeDeposit(double amount)
{
    balance = balance + amount;
}

void bankAccount::withdrawMoney(double amount)
{
    balance -= amount;
}

bankAccount::bankAccount(string name, int num, double accBal)
{
    accName = name;
    accNum = num;
    balance = accBal;
}

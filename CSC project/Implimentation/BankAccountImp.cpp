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
    cout << name << "" << accountNum << " Total Balance: $" << balance;
}

void bankAccount::withdrawMoney(double amt)
{
    balance -= amt;
}

int bankAccount::getAccountNumber()
{
    return accountNum;
}

double bankAccount::getBalance()
{
    return balance;
}

string bankAccount::getName()
{
    return name;
}

void bankAccount::setName(string n)
{
    name = n;
}

void bankAccount::deposit(double amt)
{
    balance = balance + amt;
}

bankAccount::bankAccount(string accName, int accNum, double accBalance)
{
    name = accName;
    accountNum = accNum;
    balance = accBalance;
}

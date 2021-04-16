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

void bankAccount::setBankAccount(string accName, int accNum, double accBalance) {
    
    name = accName;
    accountNumber = accNum;
    balance = accBalance;
    
}

double bankAccount::retrieveBalance(double accBalance) {
    
    return balance;
}

void bankAccount::depositMoney(double deposit) {
    
    balance += deposit;
}

void bankAccount::withdrawMoney(int withdraw) {
    
    balance -= withdraw;
}

string bankAccount::retrieveName(string accName) {
    
    return name;
}

int bankAccount::retrieveAccountNumber(int accNum) {
    
    return accountNumber;
}

bankAccount::bankAccount(string accName, int accNum, double accBalance) {
    
    name = accName;
    accountNumber = accNum;
    balance = accBalance;
    
}

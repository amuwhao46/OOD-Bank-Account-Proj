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

void bankAccount::print() {
    
    cout << accountNumber << endl;
}

void bankAccount::setBankAccount(string accName, int accNum, double accBalance) {
    
    name = accName;
    accountNumber = accNum;
    balance = accBalance;
    
}

string bankAccount::retrieveName(string accName) {
    
    return name;
}

int bankAccount::retrieveAccountNumber(int accNum) {
    
    return accountNumber;
}

double bankAccount::retrieveBalance(double accBalance) {
    
    return balance;
}


int bankAccount::accountNum(int number) const {
    
    return accountNumber;
}

void bankAccount::withdrawMoney(int money) {
    
    balance -= money;
}

void bankAccount::createMonthlyStatement(int statement) {
    
    cout << "Here is your statement of the month" << endl;
    cout << "Your balance is: " << balance << endl;
    cout << "Your account number is: " << accountNumber << endl;
    cout << "The name registered under this account is: " << name << endl;
    
}

bankAccount::bankAccount(string accName, int accNum, double accBalance) {
    
    name = accName;
    accountNumber = accNum;
    balance = accBalance;
    
}

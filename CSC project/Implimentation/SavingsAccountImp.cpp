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

void savingsAccount::setInterest(double interestRate, double intPayment) {
    
    interest = interestRate;
    payment = intPayment;
    
    payment = (interest * balance) + balance;
}

double savingsAccount::getInterest() {
    
    return interest;
}

void savingsAccount::createMonthlyStatement() {
    
    cout << "The statement for this month" << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Account name: " << name << endl;
    cout << "Remaining balance in account: " << balance << endl;
}

savingsAccount::savingsAccount(double interestRate, double intPayment) {
    
    interest = interestRate;
    payment = intPayment;
}

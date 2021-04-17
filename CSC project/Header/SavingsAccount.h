//
//  SavingsAccount.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/12/21.
//

#ifndef SavingsAccount_h
#define SavingsAccount_h

#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "BankAccount.h"
using namespace std;

class savingsAccount: public bankAccount {
    
public:
    virtual void writeCheck(double balance) = 0;
    
    void setInterest(double interestRate, double intPayment);
    
    double getInterest();
    
    savingsAccount(double interestRate, double intPayment);
    
    virtual void createMonthlyStatement();
    
private:
    double interest;
    double payment;
};

#endif /* SavingsAccount_h */

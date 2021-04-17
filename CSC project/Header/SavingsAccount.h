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

class savingsAccount : public bankAccount
{
public:
    double getInterestRate();
    
    void setInterestRate(double rate);
    
    void finalInterest();
    
    virtual void statement();
    
    virtual void print();
    
    savingsAccount(string n, int accNum, double accBal);
    
    savingsAccount(string n, int accNum, double accBal, double intRate);

protected:
    double interest;

private:
    const double INT_RATE = 0.045;
};
#endif /* SavingsAccount_h */

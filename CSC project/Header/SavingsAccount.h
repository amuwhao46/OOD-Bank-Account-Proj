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

class savingsAccount: public bankAccount
{
public:
    double getInterestRate();
    
    void setInterestRate(double rate);
    
    void finalInt();
    
    virtual void statement();
    
    virtual void print();
    
    // Constructor
    savingsAccount(string name, int num, double accBal);
    
    // Holds interest rate
    savingsAccount(string name, int num, double accBal, double intRate);

protected:
    double interest;

private:
    const double INT_RATE = 0.05;
};

#endif /* SavingsAccount_h */

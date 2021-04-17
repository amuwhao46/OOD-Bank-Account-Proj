//
//  HighInterestSavings.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/14/21.
//

#ifndef HighInterestSavings_h
#define HighInterestSavings_h

#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "SavingsAccount.h"
using namespace std;

class highInterestSavings : public savingsAccount
{
public:
    double getMinBal();
    
    bool testMinBal(double amount);
    
    virtual void withdraw(double amount);
    
    virtual void print();
    
    highIntSavAcct(string accName, int accNum, double accBalance, double intRate, double minBal);

protected:
    double minimumBalance;
    double interest;

};
#endif /* HighInterestSavings_h */

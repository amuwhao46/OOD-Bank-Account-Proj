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

class highInterestSavings: public savingsAccount
{
public:
    double getMinBalance();
    
    bool verMinBalance(double amount);
    
    virtual void withdraw(double amount);
    
    virtual void print();
    
    // Constructor
    highInterestSavings(string name, int num, double accBal);
    
    // Holds interest rate and minimum balance
    highInterestSavings(string name, int num, double accBal, double intRate, double minBal);

protected:
    double minimumBalance;
    double interest;

private:
    const double MIN_BALANCE = 1000;
    const double INT_RATE = 0.09;

};

#endif /* HighInterestSavings_h */

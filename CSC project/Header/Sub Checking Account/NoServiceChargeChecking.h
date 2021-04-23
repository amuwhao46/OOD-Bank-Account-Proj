//
//  NoServiceChargeChecking.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/14/21.
//

#ifndef NoServiceChargeChecking_h
#define NoServiceChargeChecking_h

#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "CheckingAccount.h"
using namespace std;

class noServiceChargeChecking: public checkingAccount
{
public:
    double getMinimumBalance();
    
    void setMinimumBalance(double minimum);
    
    bool verMinimumBal(double amount);
    
    virtual void monthlyStatement();
    
    void writeCheck(double amount);
    
    void withdraw(double amount);
    
    virtual void print();
    
    // Constructor
    noServiceChargeChecking(string name, int num, double accBal);
    
    // Holds interest rate
    noServiceChargeChecking(string name, int num, double accBal, double minimum, double intRate);
    
protected:
    double minimumBalance;
    double interestRate;

private:
    const double INT_RATE = 0.035;
    const double MIN_BAL = 500;
};
#endif /* NoServiceChargeChecking_h */

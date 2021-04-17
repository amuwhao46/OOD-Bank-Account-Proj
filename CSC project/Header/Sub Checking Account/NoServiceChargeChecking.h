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

class noServiceCharge: public checkingAccount
{
public:
    double getMinBalance();
    
    void setMinBalance(double min);
    
    bool verMinBal(double amount);
    
    void writeCheck(double amount);
    
    void withdraw(double amount);
    
    virtual void print();
    
    noServiceCharge(string accName, int accNum, double accBalance);
    
    noServiceCharge(string accName, int accNum, double accBalance, double min, double interestRate);
protected:
    double minimumBalance;
    double interestRate;

private:
    const double INT_RATE = 0.07;
    const double MIN_BAL = 500;
};
#endif /* NoServiceChargeChecking_h */

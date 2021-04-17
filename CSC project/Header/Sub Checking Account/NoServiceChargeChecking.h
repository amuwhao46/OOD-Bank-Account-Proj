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

class noServiceChecking: public checkingAccount {
    
public:
    double getMinimumBalance();
    
    void setMinimumBalance(double accBalance);
    
    void withdraw(double accBalance);
    
    void paysInterest();
    
    void writeCheck();
    
    noServiceChecking(string accName, int accNum, double accBalance);
    
    
private:
    double interest = .05;
    double minBalance = 500;
};

#endif /* NoServiceChargeChecking_h */

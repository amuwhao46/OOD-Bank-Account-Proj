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
    
    void setMinimumBalance(double balance);
    
    void writeCheck(double balance);
    
    void withdrawMoney(double balance);
        
protected:
    double minimumBalance;
    double interestRate;
    
private:
    double INTEREST_RATE = .05;
    double MIN_BALANCE = 500;
};

#endif /* NoServiceChargeChecking_h */

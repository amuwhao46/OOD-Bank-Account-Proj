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
    void paysInterest();
    
    void writeCheck();
    
private:
    double interest;
    double balance;
};

#endif /* NoServiceChargeChecking_h */

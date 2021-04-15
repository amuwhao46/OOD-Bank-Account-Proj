//
//  CheckingAccount.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/12/21.
//

#ifndef CheckingAccount_h
#define CheckingAccount_h

#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "BankAccount.h"
using namespace std;

// Abstract class
class checkingAccount: bankAccount {
    
public:
    virtual void writeCheck() = 0;
private:
};

#endif /* CheckingAccount_h */

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
class checkingAccount: public bankAccount
{
public:
    
    virtual void writeCheck(double amount) = 0;
    
    // Constructor
    checkingAccount(string name, int num, double accBal);
};
#endif /* CheckingAccount_h */

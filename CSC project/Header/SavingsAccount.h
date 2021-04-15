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

class savingsAccount: public bankAccount {
    
public:
    void setInterest(int interestRate);
    
    void getInterest();
    
    savingsAccount(int interestRate);
    
private:
    int interest;
};

#endif /* SavingsAccount_h */

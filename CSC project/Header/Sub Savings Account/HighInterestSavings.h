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

class highIntSavings: public savingsAccount {
    
public:
    void paysIntertest();
    
private:
    double interest;
    double balance;
    
};

#endif /* HighInterestSavings_h */

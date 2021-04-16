//
//  CD.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/12/21.
//

#ifndef CD_h
#define CD_h

#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "BankAccount.h"
using namespace std;

class CD: public bankAccount {
    
public:
    void setCD(int numCDMonths, int interestRate, int CDMonths);
    
    int getNumCDMonths();
    
    double getInterestRate() const;
    
    string getCDMonths();
    
    CD(int numCDMonths, int interestRate, int CDMonths);
    
private:
    int numCDMonth;
    double interest;
    string CDMonth;
};

#endif /* CD_h */

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

class CD: public bankAccount
{
public:
    double getInterestRate();
    
    void setIntesrestRate(double rate);
    
    double getMonth();
    
    void setMonth(int month);
    
    double getMaturityMonth();
    
    void setMaturityMonth(int matMonth);
    
    void interestFinal();
    
    void withdraw();
    
    void withdraw(double amount);
    
    void statement();
    
    void print();
    
    CD(string accName, int accNum, double accBalance);
    
    CD(string accName, int accNum, double accBalance, double interestRate, int maturityMonth);
    
private:
    const double INTEREST_RATE;
    const int NUM_MAT_MONTHS;
    int maturityMonth;
    int CDMonth;
    double interest;

};

#endif /* CD_h */

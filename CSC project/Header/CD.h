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
    double getInterestRate() const;
    
    void setInterestRate(double rate);
    
    double getMonth();
    
    void setMonth(int month);
    
    double getMaturityMonth();
    
    void setMaturityMonth(int matMonth);
    
    void interestFinal();
    
    void withdraw();
    
    void withdraw(double amount);
    
    void statement();
    
    void print();
    
    // Constructor
    CD(string name, int num, double accBal);
    
    // Holds interest rate & maturity month
    CD(string name, int num, double accBal, double intRate, int matMon);
    
private:
    const double INT_RATE = 0.1;
    const int NUM_OF_MAT_MONTHS = 12;
    
    int maturityMonth;
    int certOfDepMonth;
    double interestRate;

};

#endif /* CD_h */

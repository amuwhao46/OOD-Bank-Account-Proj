//
//  HighInterestChecking.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/14/21.
//

#ifndef HighInterestChecking_h
#define HighInterestChecking_h

#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "NoServiceChargeChecking.h"
using namespace std;

class highInterestChecking: public noServiceCharge
{
public:
    double getInterestRate();
    
    void setInterestRate(double interestRate);
    
    void finalRate();
    
    void statement();
    
    virtual void print();
    
    highInterestChecking(string accName, int accNum, double accBalance);
    
    highInterestChecking(string accName, int accNum, double accBalance, double min, double interestRate);

private:
    const double INT_RATE = 0.03;
    const double MIN_BAL = 1000;
};

#endif /* HighInterestChecking_h */

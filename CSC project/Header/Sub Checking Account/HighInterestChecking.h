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

class highInterestChecking: public noServiceChargeChecking
{
public:
    double getInterestRate();
    
    void setInterestRate(double intRate);
    
    void finalRate();
    
    void statement();
    
    virtual void print();
    
    // Constructor
    highInterestChecking(string name, int num, double accBal);
    
    // Holds minimum balance and interest rate
    highInterestChecking(string name, int num, double accBal, double minimum, double intRate);

private:
    const double INT_RATE = 0.06;
    const double MIN_BAL = 3000;
};

#endif /* HighInterestChecking_h */

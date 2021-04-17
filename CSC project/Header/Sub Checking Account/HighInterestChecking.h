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

class highInterestChecking: public noServiceChecking {
public:
    void setInterestRate(double);
    
    double getInterestRate();

    
private:
    double INTEREST_RATE = 0.05;
    double MIN_BALANCE = 5000.00;
};

#endif /* HighInterestChecking_h */

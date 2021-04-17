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
    void setInterestRate(double interest);
    
    double getInterestRate();

    
private:
    double INTEREST_RATE = 0.03;
    double MIN_BALANCE = 500.00;
};

#endif /* HighInterestChecking_h */

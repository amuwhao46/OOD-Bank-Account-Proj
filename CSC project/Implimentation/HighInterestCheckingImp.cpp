//
//  HighInterestCheckingImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "HighInterestChecking.h"
using namespace std;

void highInterestChecking::setInterestRate(double interest) {
    
    INTEREST_RATE = interest;
}

double highInterestChecking::getInterestRate() {
    
    return INTEREST_RATE;
}

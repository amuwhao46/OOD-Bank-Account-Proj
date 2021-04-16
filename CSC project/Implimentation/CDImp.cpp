//
//  CDImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "CD.h"
using namespace std;

void CD::setCD(int numCDMonths, int interestRate, int CDMonths) {
    
    numCDMonth = numCDMonths;
    interest = interestRate;
    CDMonth = CDMonths;
}

int CD::getNumCDMonths() {
    
    return numCDMonth;
}

double CD::getInterestRate() {
    
    return interest;
}

string CD::getCDMonths() {
    
    return CDMonth;
}

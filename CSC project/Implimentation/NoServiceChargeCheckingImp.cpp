//
//  NoServiceChargeCheckingImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "NoServiceChargeChecking.h"
using namespace std;

double noServiceChecking::getMinimumBalance() {
    
    return minimumBalance;
}

void noServiceChecking::setMinimumBalance(double balance) {
    
    minimumBalance = balance;
}

void noServiceChecking::writeCheck(double balance) {
    
    cout << "something" << endl;
}

void noServiceChecking::withdrawMoney(double balance) {
    
    cout << "something" << endl;
}

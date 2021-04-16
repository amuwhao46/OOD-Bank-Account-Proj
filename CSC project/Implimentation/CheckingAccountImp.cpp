//
//  CheckingAccountImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "CheckingAccount.h"
using namespace std;

checkingAccount::checkingAccount(string accName, int accNum, double accBalance) {
    
    name = accName;
    accountNumber = accNum;
    balance = accBalance;
    
}

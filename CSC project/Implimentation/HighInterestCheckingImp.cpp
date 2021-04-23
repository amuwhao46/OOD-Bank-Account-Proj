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

double highInterestChecking::getInterestRate()
{
    return interestRate;
}

void highInterestChecking::setInterestRate(double intRate)
{
    interestRate = intRate;
}

void highInterestChecking::finalRate()
{
    balance += balance * interestRate;
}

void highInterestChecking::statement()
{
    finalRate();
}

void highInterestChecking::print()
{
    cout << "Account Number: " << getAccountNumber() << endl;
    cout << "Name under High Interest Checking: " << getName() << endl;
    cout << "Balance in High Interest Checking: " << getBalance() << endl;
}

highInterestChecking::highInterestChecking(string name, int num, double accBal): noServiceChargeChecking(name, num, accBal)
{
    minimumBalance = MIN_BAL;
    interestRate = INT_RATE;
}

highInterestChecking::highInterestChecking(string name, int num, double accBal, double minimum, double intRate): noServiceChargeChecking(name, num, accBal, minimum, intRate)
{
}

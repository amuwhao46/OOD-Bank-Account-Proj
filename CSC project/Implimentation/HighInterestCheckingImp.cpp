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

void highInterestChecking::setInterestRate(double interest)
{
    interestRate = interest;
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
    cout << "High Interest Checking: " << getName() << endl;
    cout << "Account Number of User: " << getAccountNumber() << endl;
    cout << "Tot Balance in Account: " << getBalance() << endl;
}

highInterestChecking::highInterestChecking(string accName, int accNum, double accBalance): highInterestChecking(accName, accNum, accBalance)
{
    minimumBalance = MIN_BAL;
    interestRate = INT_RATE;
}

highInterestChecking::highInterestChecking(string accName, int accNum, double accBalance, double min, double interestRate):highInterestChecking(accName, accNum, accBalance, min, interestRate)
{
}

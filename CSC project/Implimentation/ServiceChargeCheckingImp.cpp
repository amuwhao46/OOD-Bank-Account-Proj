//
//  ServiceChargeCheckingImp.cpp
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/15/21.
//

#include <stdio.h>
#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "ServiceChargeChecking.h"
using namespace std;

void serviceCharge::statement()
{
    finalCharge();
}

void serviceCharge::print()
{
    cout << "Serv - Charge Checking: " << getName() << endl;
    cout << "Account Number of User: " << getAccountNumber() << endl;
    cout << "Tot Balance in Account: " << getBalance() << endl;
}

double serviceCharge::getServiceChargeAmount()
{
    return serviceChargeAmount;
}

double serviceCharge::getServiceChargeCheck()
{
    return servChargeChecking;
}

int serviceCharge::getNumOfChecks()
{
    return totalChecks;
}

void serviceCharge::setServiceChargeAmount(double amount)
{
    serviceChargeAmount = amount;
}

void serviceCharge::setServiceChargeCheck(double amount)
{
    servChargeChecking = amount;
}

void serviceCharge::setNumOfChecks(int checks)
{
    totalChecks = checks;
}

void serviceCharge::finalCharge()
{
    balance = balance - serviceChargeAmount;
}

void serviceCharge::writeCheck(double amount)
{
    if (totalChecks < MAX_NUM_OF_CHECKS)
    {
        balance = balance - amount;
    }
    else
    {
        balance = balance - amount - servChargeChecking;
    }
    totalChecks++;
}

serviceCharge::serviceCharge(string n, int accNum, double accBal):checkingAccount(n,accNum,accBal)
{
    serviceChargeAmount = ACCT_SERV_CHRGE;
    totalChecks = 0;
    servChargeChecking = 0;
}

serviceCharge::serviceCharge(string n, int accNum, double accBal, double chargeAmount, double check) :checkingAccount(n, accNum, accBal)
{
    serviceChargeAmount = chargeAmount;
    totalChecks = 0;
    servChargeChecking = check;
}

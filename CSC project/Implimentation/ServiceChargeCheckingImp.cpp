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

using namespace std;

double serviceChargeChecking::getServiceChargeAmount()
{
    return serviceChargeAmount;
}

double serviceChargeChecking::getServiceChargeCheck()
{
    return servChargeChecking;
}

int serviceChargeChecking::getNumberOfChecks()
{
    return checksTotal;
}

void serviceChargeChecking::setServiceChargeAmount(double amount)
{
    serviceChargeAmount = amount;
}

void serviceChargeChecking::setServiceChargeCheck(double amount)
{
    servChargeChecking = amount;
}

void serviceChargeChecking::setNumberOfChecks(int total)
{
    checksTotal = total;
}

void serviceChargeChecking::finalCharge()
{
    balance = balance - serviceChargeAmount;
}

void serviceChargeChecking::writeCheck(double amount)
{
    if (checksTotal < MAX_NUM_CHECKS)
    {
        balance = balance - amount;
    }
    else
    {
        balance = balance - amount - servChargeChecking;
    }
    checksTotal++;
}

void serviceChargeChecking::statement()
{
    finalCharge();
}

void serviceChargeChecking::print()
{
    cout << "Account Number: " << getAccountNumber() << endl;
    cout << "Name under Service Charge Checking: " << getName() << endl;
    cout << "Balance in Service Charge Checking: " << getBalance() << endl;
}

serviceChargeChecking::serviceChargeChecking(string name, int num, double accBal):checkingAccount(name, num, accBal)
{
    serviceChargeAmount = ACCT_SERV_CHRGE;
    checksTotal = 0;
    servChargeChecking = 0;
}

serviceChargeChecking::serviceChargeChecking(string name, int num, double accBal, double chargeAmount, double check): checkingAccount(name, num, accBal)
{
    serviceChargeAmount = chargeAmount;
    checksTotal = 0;
    servChargeChecking = check;
}

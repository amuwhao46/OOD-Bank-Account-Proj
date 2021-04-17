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

double CD::getInterestRate() const
{
    return interestRate;
}

void CD::setIntesrestRate(double rate)
{
    interestRate = rate;
}

double CD::getMonth()
{
    return CDMonth;
}

void CD::setMonth(int month)
{
    CDMonth = month;
}

double CD::getMaturityMonth()
{
    return maturityMonth;
}

void CD::setMaturityMonth(int month)
{
    maturityMonth = month;
}

void CD::interestFinal()
{
    balance += (balance * interestRate);
}

void CD::withdraw()
{
    if (CDMonth > maturityMonth)
    {
        balance = 0;
    }
    else
        cout << "Certificate of Deposit has not been matured. No withdrawal allowed." << endl;
}

void CD::withdraw(double amount)
{

}

void CD::statement()
{
    interestFinal();
}

void CD::print()
{
    cout << "Certificate of Deposit: " << getName() << endl;
    cout << "Account Number of User: " << getAccountNumber() << endl;
    cout << "Tot Balance in Account: " << getBalance() << endl;
}

CD::CD(string accName, int accNum, double accBalance):bankAccount(accName, accNum, accBalance)
{
    interestRate = INTEREST_RATE;
    maturityMonth = NUM_MAT_MONTHS;
    CDMonth = 0;
}

CD::CD(string accName, int accNum, double accBalance, double interestRate, int mMonth):bankAccount(accName, accNum, accBalance)
{
    interestRate = interestRate;
    maturityMonth = mMonth;
    CDMonth = 0;
}

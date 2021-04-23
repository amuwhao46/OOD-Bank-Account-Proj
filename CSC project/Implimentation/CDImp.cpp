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

void CD::setInterestRate(double rate)
{
    interestRate = rate;
}

double CD::getMonth()
{
    return certOfDepMonth;
}

void CD::setMonth(int month)
{
    certOfDepMonth = month;
}

double CD::getMaturityMonth()
{
    return maturityMonth;
}

void CD::setMaturityMonth(int matMonth)
{
    maturityMonth = matMonth;
}

void CD::interestFinal()
{
    balance += (balance * interestRate);
}

void CD::withdraw()
{
    if (certOfDepMonth > maturityMonth)
    {
        balance = 0;
    }
    else
        cout << "Withdrawal cannot be made at this time! Certificate of Deposit has not matured" << endl;
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
    cout << "Account Number: " << getAccountNumber() << endl;
    cout << "Name under Certificate of Deposit: " << getName() << endl;
    cout << "Balance in Certificate of Deposit: " << getBalance() << endl;
}

CD::CD(string name, int num, double accBal): bankAccount(name, num, accBal)
{
    interestRate = INT_RATE;
    maturityMonth = NUM_OF_MAT_MONTHS;
    certOfDepMonth = 0;
}

CD::CD(string name, int num, double accBal, double intRate, int matMonth): bankAccount(name, num, accBal)
{
    interestRate = intRate;
    maturityMonth = matMonth;
    certOfDepMonth = 0;
}

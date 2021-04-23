//==========================================================
//
// Title:
// Course:      CSC 2111
// Lab Number:
// Author:      Oke Amuwha
// Date:
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <cmath> // For math
// Custom libraries
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "ServiceChargeChecking.h"
#include "NoServiceChargeChecking.h"
#include "HighInterestChecking.h"
#include "HighInterestSavings.h"
#include "CD.h"
#include "SavingsAccount.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

    // Call bank Account
    bankAccount *accountHolder[9];

    // Array to store data
    accountHolder[0] = new savingsAccount("Jesse", 748234, 15000);
    accountHolder[1] = new CD("Jordan", 928423, 1600);
    accountHolder[2] = new serviceChargeChecking("Jackie", 726491, 16700);
    accountHolder[3] = new savingsAccount("Jacob", 201374, 19050);
    accountHolder[4] = new highInterestChecking("Jaylen", 293645, 20000);
    accountHolder[5] = new highInterestSavings("Janette", 572042, 34300);
    accountHolder[6] = new serviceChargeChecking("John", 294658, 2300);
    accountHolder[7] = new CD("Jack", 208525, 7200);
    accountHolder[8] = new savingsAccount("Jeron", 276403, 10000);

    // Output to Display
    cout << "January" << endl
       << "---------" << endl;
    for (int i = 0; i < 6; i++)
    {
       accountHolder[i]->statement();
       accountHolder[i]->print();

       cout << endl;
    }

    cout << endl << "February" << endl
                 << "--------" << endl;
    for (int i = 0; i < 6; i++)
    {
       accountHolder[i]->statement();
       accountHolder[i]->print();

       cout << endl;
    }
    
    for (int i = 0; i < 6; i++)
       accountHolder[i]->withdrawMoney(50);

    cout << endl << "March" << endl
                 << "-----" << endl;
    for (int i = 0; i < 6; i++)
    {
       accountHolder[i]->statement();
       accountHolder[i]->print();

       cout << endl;
    }

    cout << "April" << endl
         << "-----" << endl;
    for (int i = 0; i < 6; i++)
    {
       accountHolder[i]->statement();
       accountHolder[i]->print();

       cout << endl;
    }
    
    for (int i = 0; i < 6; i++)
       accountHolder[i]->makeDeposit(600);
    
    cout << "May" << endl
         << "---" << endl;
    for (int i = 0; i < 6; i++)
    {
       accountHolder[i]->statement();
       accountHolder[i]->print();

       cout << endl;
    }
    
    cout << "June" << endl
         << "----" << endl;
    for (int i = 0; i < 6; i++)
    {
       accountHolder[i]->statement();
       accountHolder[i]->print();

       cout << endl;
    }
}


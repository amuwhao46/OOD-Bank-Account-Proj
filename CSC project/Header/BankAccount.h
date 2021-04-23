//
//  BankAccount.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/14/21.
//

#ifndef BankAccount_h
#define BankAccount_h

#include <string> // For string data type
#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
using namespace std;

// Abstract class
class bankAccount
{
public:
    virtual void print();
    
    int getAccountNumber();
    
    double getBalance();
    
    string getName();
    
    void setName(string name);
    
    void makeDeposit(double amount);
    
    virtual void withdrawMoney(double amount);
    
    // Pure virtual function
    virtual void statement() = 0;
    
    // Constructor
    bankAccount(string name = "", int num = 0, double accBal = 0);

protected:
    int accNum;
    double balance;
    string accName;

};
#endif /* BankAccount_h */

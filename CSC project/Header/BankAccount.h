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
    
    virtual void withdrawMoney(double amount);
    
    virtual void statement() = 0;
    
    int getAccountNumber();
    
    double getBalance();
    
    string getName();
    
    void setName(string accName);
    
    void deposit(double amount);
    
    bankAccount(string accName = "", int accNum = 0, double accBalance = 0);

protected:
    int accountNum;
    double balance;
    string name;

};
#endif /* BankAccount_h */

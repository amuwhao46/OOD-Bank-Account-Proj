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
class bankAccount {
    
public:
//    void setBankAccount(string accName, int accNum, double accBalance);
//
//    virtual void createMonthlyStatement() = 0;
//
//    virtual double retrieveBalance(double accBalance);
//
//    virtual void depositMoney(double deposit);
//
//    virtual void withdrawMoney(int withdraw);
//
//    string retrieveName(string accName);
//
//    int retrieveAccountNumber(int accNum);
    
    virtual void withdrawMoney(double accbalance);
    
    virtual void depositMoney(double accbalance);
    
    virtual double retrieveBalance();
    
    virtual void createMonthlyStatement() = 0;
    
    int retrieveAccountNumber();
    
    void setName(string accName);
    
    string retrieveName();
    
    bankAccount(string accName = "", int accNum = 0, double accBalance = 0);
    
protected:
    string name;
    int accountNumber;
    double balance;
    
};

#endif /* BankAccount_h */

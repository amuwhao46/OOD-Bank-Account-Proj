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
    void setBankAccount(string accName, int accNum, double accBalance);
    
    virtual void createMonthlyStatement(int statement) = 0;
    
    virtual double retrieveBalance(double accBalance);
    
    virtual void depositMoney(double deposit);
    
    virtual void withdrawMoney(int withdraw);
    
    string retrieveName(string accName);
    
    int retrieveAccountNumber(int accNum);
    
    bankAccount(string accName = "", int accNum = 0, double accBalance = 0);
    
private:
    string name;
    int accountNumber;
    int installment;
    double balance;
    
};

#endif /* BankAccount_h */

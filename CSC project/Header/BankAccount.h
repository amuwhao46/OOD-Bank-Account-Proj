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
    void print();
    
    void setBankAccount(string accName, int accNum, double accBalance);
    
    virtual string retrieveName(string accName) = 0;
    
    virtual int retrieveAccountNumber(int accNum) = 0;
    
    virtual double retrieveBalance(double accBalance) = 0;
    
    int accountNum(int number) const;
    
    void withdrawMoney(int money);
    
    void createMonthlyStatement(int statement);
    
    bankAccount(string accName = "", int accNum = 0, double accBalance = 0);
    
private:
    string name;
    int accountNumber;
    int installment;
    double balance;
    
};

#endif /* BankAccount_h */

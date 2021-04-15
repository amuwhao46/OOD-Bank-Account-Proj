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
    virtual void retrieveName(string accName) = 0;
    
    virtual void retrieveAccountNumber(int accNum) = 0;
    
    virtual void retrieveBalance(double accBalance) = 0;
    
    int accountNum(int number) const;
    
    void withdrawMoney(int money);
    
    void createMonthlyInst(int installment);
    
    bankAccount(string accName, int accNum, double accBalance);
    
private:
    string name;
    int accountNumber;
    double balance;
    
};

#endif /* BankAccount_h */

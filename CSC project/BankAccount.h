//
//  BankAccount.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/14/21.
//

#ifndef BankAccount_h
#define BankAccount_h

// Abstract class
class bankAccount {
    
public:
    virtual void retrieveName() = 0;
    
    virtual void retrieveAccountNumber() = 0;
    
    virtual void retrieveBalance() = 0;
    
    virtual void withdrawMoney() = 0;
    
    virtual void createMonthlyInst() = 0;
    
    string name;
    int accountNumber;
    int balance;
    
};

#endif /* BankAccount_h */

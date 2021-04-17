//
//  ServiceChargeChecking.h
//  CSC project
//
//  Created by Oke-Oghene Amuwha on 4/14/21.
//

#ifndef ServiceChargeChecking_h
#define ServiceChargeChecking_h

#include <iostream> // For cin, cout, and system
#include <iomanip> // For formatted output
#include "CheckingAccount.h"
using namespace std;

//class serviceChecking: public checkingAccount {
//
//public:
//    double getServiceChargeAccount();
//
//    void setServiceChargeAccount();
//
//    void setServiceChargeChecks();
//
//    double getServiceChargeChecks();
//
//    int getNumberOfChecksWritten();
//
//    void setNumberOfChecksWritten(int );
//
//    void checksPerMonth() const;
//
//    void writeCheck();
//
//    serviceChecking(string accName, int accNum, double accBalance);
//
//private:
//    int writtenChecks;
//    int month;
//};

class serviceCharge: public checkingAccount
{
public:
    virtual void statement();
    
    virtual void print();
    
    double getServiceChargeAmount();
    
    double getServiceChargeCheck();
    
    int getNumOfChecks();
    
    void setServiceChargeAmount(double amount);
    
    void setServiceChargeCheck(double amount);
    
    void setNumOfChecks(int checks);
    
    void finalCharge();
    
    void writeCheck(double amountt);
    
    serviceCharge(string accName, int accNum, double accBalance);
    
    serviceCharge(string accName, int accNum, double accBalance, double chargeAmount, double check);

protected:
    int totalChecks;
    double serviceChargeAmount;
    double servChargeChecking;
    

private:
    const int MAX_NUM_OF_CHECKS = 10;
    const double SERV_CHARGE_NUM_CHECKS = 6;
    const double ACCT_SERV_CHRGE = 7;
};

#endif /* ServiceChargeChecking_h */

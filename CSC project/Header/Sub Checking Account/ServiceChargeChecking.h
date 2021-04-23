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

class serviceChargeChecking: public checkingAccount
{
public:
    double getServiceChargeAmount();
    
    double getServiceChargeCheck();
    
    int getNumberOfChecks();
    
    void setServiceChargeAmount(double amount);
    
    void setServiceChargeCheck(double amount);
    
    void setNumberOfChecks(int total);
    
    void finalCharge();
    
    void writeCheck(double amount);
    
    virtual void statement();
    
    virtual void print();
    
    // Constructor
    serviceChargeChecking(string name, int num, double accBal);
    
    // Holds account charge and checks
    serviceChargeChecking(string name, int num, double accBal, double chargeAmount, double check);

protected:
    int checksTotal;
    double serviceChargeAmount;
    double servChargeChecking;
    

private:
    const int MAX_NUM_CHECKS = 3;
    const double SERV_CHARGE_NUM_CHECKS = 3;
    const double ACCT_SERV_CHRGE = 6;
};
#endif /* ServiceChargeChecking_h */

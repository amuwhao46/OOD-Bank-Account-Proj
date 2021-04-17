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

class ServiceChecking: public checkingAccount
{
public:
    void setServiceChargeAccount();
    
    void setServiceChargeChecks();
    
    void setNumberOfChecksWritten();
    
    double getServiceChargeAccount();

    double getServiceChargeChecks();

    int getNumberOfChecksWritten();

    void writeCheck();

private:
    double ACCOUNT_SERVICE_CHARGE = 10.00;
    int MAXIMUM_NUM_OF_CHECKS = 5;

protected:
    double serviceChargeAccount;
    double serviceChargeCheck;
    int numberOfChecksWritten;
};

#endif /* ServiceChargeChecking_h */

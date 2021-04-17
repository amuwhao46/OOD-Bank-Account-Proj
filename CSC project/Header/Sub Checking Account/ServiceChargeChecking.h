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
    
protected:
    int numberOfChecksWritten;
    double serviceChargeAccount;
    double serviceChargeCheck;

private:
    const int MAX_NUM_CHECKS = 10;
    const double SERVICE_CHARGE = 18;
};

#endif /* ServiceChargeChecking_h */

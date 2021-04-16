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

class serviceChecking: public checkingAccount {
    
public:
    void checksPerMonth() const;
    
    
private:
    int writtenChecks;
    int month;
};


#endif /* ServiceChargeChecking_h */

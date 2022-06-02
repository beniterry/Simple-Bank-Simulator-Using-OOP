// Ben Terry

#ifndef SavingsAccount_h
#define SavingsAccount_h
#include "BankAccount.h"

class SavingsAccont : public BankAccount
{
protected:
    
    bool status;
    
public:
    
    void withdraw(double val){
        if (status)
            BankAccount::withdraw(val);
    }
    void deposit(double value){
        if (status)
            BankAccount::deposit(value);
        else if(value > 25)
        {
            status=true;
            BankAccount::deposit(value);
        }
        else
            BankAccount::deposit(value);
    }
    void monthlyProc()
    {
        if (monthWithdraw>4)
        {
            int above4 = monthWithdraw - 4;
            monthlyCharges = above4 * 1;
        }
        BankAccount::monthlyProc();
        
        if (balance < 25)
            status = false;
    }
};

#endif /* SavingsAccount_h */

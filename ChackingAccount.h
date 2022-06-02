// Ben Terry

#ifndef ChackingAccount_h
#define ChackingAccount_h
#include "BankAccount.h"
#include "SavingsAccount.h"

class checkingAccount: public BankAccount
{
public:
    void withdraw(double val)
    {
        if (balance - val < 0)
        {
            balance -= 15;
        }
        else
            BankAccount::withdraw(val);
        
    }
    void monthlyProc()
    {
        monthlyCharges = 5;
        monthlyCharges += monthWithdraw * 0.10;
        BankAccount::monthlyProc();
    }
};

#endif /* ChackingAccount_h */

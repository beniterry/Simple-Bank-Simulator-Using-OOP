// Ben Terry

#ifndef BankAcount_h
#define BankAcount_h
#include <stdio.h>

class BankAccount
{
protected:
    
    double balance;
    int monthDeposit;
    int monthWithdraw;
    double annual_interest_rate;
    double monthlyCharges;
    
public:
    BankAccount(){
        balance = 0;
        monthDeposit = 0;
        monthWithdraw = 0;
        annual_interest_rate = 0;
        monthlyCharges = 0;
    }
    BankAccount(int b, double i){
        balance = b;
        annual_interest_rate = i;
    }
    virtual void deposit(double value){
        balance += value;
        monthDeposit += 1; //monthDeposit++
        
    }
    virtual void withdraw(double val){
        balance -= val;
        monthWithdraw += 1; //monthWithdraw++
    }
    virtual void calcInt(){
        double monthRate, monthInterest;
        monthRate = annual_interest_rate / 12;
        monthInterest = (balance * monthRate);
        balance += monthInterest;
    }
    virtual void monthlyProc(){
        monthDeposit = 0;
        monthWithdraw = 0;
        monthlyCharges = 0;
        balance -= monthlyCharges;
        calcInt();
        
    }
    double getbalance()
    {
        return balance;
    }
    int getmonthdeposit()
    {
        return monthDeposit;
    }
    int getmonthwithdraw()
    {
        return monthWithdraw;
    }
    void setannualinter(double value)
    {
        annual_interest_rate=value;
    }
};

#endif /* BankAcount_h */

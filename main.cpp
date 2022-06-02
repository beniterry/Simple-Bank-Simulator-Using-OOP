// Ben Terry
// Simple Bank Simulator Using OOP

#include <iostream>
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "ChackingAccount.h"
using namespace std;


int main()
{
    
    char choice;
    cout<<"Do you want to open Saving Account or Checking Account?  press s/c "<<endl;
    cin>>choice;
    int select;
    double value;
    if(choice == 's')
    {
        SavingsAccont acc;
        while(true)
        {
            cout<<endl<<"Press 1 to Deposit"<<endl;
            cout<<"Press 2 to Withdraw"<<endl;
            cout<<"Press 3 to display statistics "<<endl;
            cout<<"Press 4 to exit"<<endl;
            
            cin>>select;
            switch(select)
            {
                case 1 : cout<<"Enter the value that you like to deposit: "<<endl;
                    cin>> value;
                    acc.deposit(value);
                    cout<<"Your balance is "<< acc.getbalance()<<endl;
                    break;
                case 2 : cout<<"Enter the value that you like to withdraw: "<<endl;
                    cin>>value;
                    acc.withdraw(value);
                    cout<<"Your balance is "<< acc.getbalance()<<endl<<endl;
                    break;
                case 3:
                    cout<< "Deposits this month: "<<acc.getmonthdeposit()<<endl;
                    cout<<"Withdraws this month: "<<acc.getmonthwithdraw()<<endl;
                    cout<<"Beginning balance: " <<acc.getbalance()<<endl;
                    acc.monthlyProc();
                    cout<<"Ending balance: " <<acc.getbalance()<<endl;
                    break;
                    break;
                case 4: return 0;
            }
        }
    }
    else
    {
        checkingAccount acc;
        while(true)
        {
            cout<<endl<<"Press 1 to Deposit"<<endl;
            cout<<"Press 2 to Withdraw"<<endl;
            cout<<"Press 3 to check the balance"<<endl;
            cout<<"Press 4 to exit"<<endl;
            cin>>select;
            switch(select)
            {
                case 1 : cout<<"Enter the value that you like to deposit"<<endl;
                    cin>> value;
                    acc.deposit(value);
                    cout<<"Your balance is "<< acc.getbalance()<<endl;
                    break;
                case 2 : cout<<"Enter the value that you like to withdraw"<<endl;
                    cin>>value;
                    acc.withdraw(value);
                    cout<<"Your balance is "<< acc.getbalance()<<endl<<endl;
                    break;
                case 3: cout<< "Deposits this month: "<<acc.getmonthdeposit()<<endl;
                    cout<<"Withdraws this month: "<<acc.getmonthwithdraw()<<endl;
                    cout<<"Beginning balance: " <<acc.getbalance()<<endl;
                    acc.monthlyProc();
                    cout<<"Ending balance: " <<acc.getbalance()<<endl;
                    break;
                case 4: return 0;
            }
        }
    }
    
    return 0;
}

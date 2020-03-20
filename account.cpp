#include <iostream>      //adding io file
#include "account.hpp"   //adding header file

using namespace std;

account::account (double initialBalance)
{
if (initialBalance >= 0.00)
    balance = initialBalance;
else
{
    cout <<"Negative Balance" << endl;
    balance = 0.0;
}
}

void account::credit (double amount)
{
    balance = balance + amount;
}

bool account::debit (double amount)
{
    if (amount > balance)
       
   {
       cout << "Balance amount exceeded account balance." <<endl;
       return false;
   }
    else
    {
        balance = balance - amount;
        return true;
   }
       }
void account::setBalance(double newBalance)
{
    balance = newBalance;
}
double account::getBalance()
{
    return balance;
}

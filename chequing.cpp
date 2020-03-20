#include <iostream>      //adding io file
#include "chequing.hpp"   //adding header file

using namespace std;

checkingAccount :: checkingAccount  (double initialBalance, double fee) : account (initialBalance)

{
    transationFee = (fee < 0.0) ? 0.0 : fee;
}

void checkingAccount::credit(double amount)

{
    account :: credit(amount);
    chargeFee();

}

bool checkingAccount::debit(double amount)

{
    bool sucess = account :: debit(amount);

if (sucess)
{
    chargeFee();
    return true;
}
else
    return false;
}

void checkingAccount:: chargeFee()

{
    account:: setBalance(getBalance() - transationFee);
    cout << "$" << transationFee <<"transaction fee charged."<< endl;
}

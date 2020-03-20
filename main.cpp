#include <iostream>
#include <iomanip>

using namespace std;

#include "account.hpp"
#include "saving.hpp"
#include "chequing.hpp"

int main()

{
    account ACCOUNT (1000.00);
    savingAccount SAVING (500.00 , 0.09);
    checkingAccount CHECKING (500, 1.0);
    cout << fixed << setprecision (2);
    
    cout <<"Account Balance ---> "<< ACCOUNT.getBalance()<<endl;
    cout <<"Saving Balance ----> "<<SAVING.getBalance() <<endl;
    cout <<"Checking Balance --> "<< CHECKING.getBalance()<<endl;
    
    double interestEarned = SAVING.calculateInterest();
    cout <<"If adding $" <<interestEarned << " interest to saving account then"<<endl;
    SAVING.credit(interestEarned);
    cout <<"The saving account balance is " <<
    SAVING.getBalance()<<endl;
    cout <<endl;
    system ("pause");
    return 0;
    
}

//  Account header file
#ifndef ACCOUNT_H
#define ACCOUNT_H

class account {

public:
    account (double);              //initializes account balance
    virtual void credit(double);   //adding to account balance
    virtual bool debit(double);    //substracting from account balance
    void setBalance(double);
    double getBalance();
private:
    double balance;
    
};

#endif /* account_hpp */

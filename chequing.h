#ifndef chequing_hpp
#define chequing_hpp

#include "account.hpp"

class checkingAccount : public account

{
public:
    checkingAccount (double,double);
    virtual void credit(double);
    virtual bool debit(double);
    
private:
    double transationFee;
    void chargeFee();
};

#endif /* chequing_hpp */

#ifndef saving_hpp
#define saving_hpp

#include "account.hpp"

class savingAccount:public account
{
public:
    savingAccount (double,double);
    double calculateInterest();

private:
    double intrestRate;
};

#endif /* saving_hpp */

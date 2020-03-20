#include "saving.hpp"

savingAccount::savingAccount(double initialBalance, double rate) : account(initialBalance)
{
    intrestRate = (rate < 0.0) ? 0.0 : rate;
}

double savingAccount :: calculateInterest()

{
    return getBalance() * intrestRate;
}

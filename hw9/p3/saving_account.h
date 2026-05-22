#include"bank.h"
#include <cmath>

class SavingAccount : public BankAccount 
{
private:

public:
    SavingAccount(string name_str);
    void calculate_interest(int years);
};

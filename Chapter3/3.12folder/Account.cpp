#include <iostream>
#include "Account.h"
using namespace std;


Account::Account (int InitialBalance)
    
{
    if (InitialBalance<0)
    {
        AccountBalance=0;
        cerr<<"intial balance is invalid";
    }
    else
        AccountBalance=InitialBalance;

}

void Account::CreditBalance(int Added)
{

    AccountBalance=Added+AccountBalance;

}

void Account::DebitBalance(int Subtract)
{

    if (Subtract>AccountBalance)
    {

        cerr<<"Amount excedded Account Balance";

    } 
    else
    AccountBalance=AccountBalance-Subtract;

}

int Account::GetBalance()const
{

return AccountBalance;

}

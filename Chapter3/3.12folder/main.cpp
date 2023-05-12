#include "Account.h"
#include <iostream>
using namespace std;


int main()
{

    Account Account1(1234);

    Account1.CreditBalance(1234);

    cout<<Account1.GetBalance();



    return 0;
}
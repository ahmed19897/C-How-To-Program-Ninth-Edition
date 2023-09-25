#include "SavingsAccount.h"
int main()
{
    SavingsAccount Saver1,Saver2;

    SavingsAccount::SetAnnualRate(3.0);
    Saver1.SetBalance(2000);
    Saver2.SetBalance(3000);
    Saver1.calculateMonthlyfloaterest();
    Saver2.calculateMonthlyfloaterest();
    Saver1.DisplayBalance();
    Saver2.DisplayBalance();
    Saver1.ResetBalance();
    Saver2.ResetBalance();

    cout<<endl;

    SavingsAccount::SetAnnualRate(4.0);
    Saver1.SetBalance(2000);
    Saver2.SetBalance(3000);
    Saver1.calculateMonthlyfloaterest();
    Saver2.calculateMonthlyfloaterest();
    Saver1.DisplayBalance();
    Saver2.DisplayBalance();
    Saver1.ResetBalance();
    Saver2.ResetBalance();
}
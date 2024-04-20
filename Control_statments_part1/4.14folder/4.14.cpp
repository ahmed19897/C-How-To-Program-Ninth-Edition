#include <iostream>
using namespace std;


int main()
{
    unsigned int AccountNumber=0;
    double BalanceAtBeginning=0.0,TotalCharges=0.0,TotalCredit=0.0,AllowedCreditLimit=0.0,UsedCredit=0.0,NewBalance=0.0;

    while(AccountNumber!=-1)
    {
        cout<<"please enter the Account Number:"<<endl;
        cin>>AccountNumber;
        if (AccountNumber!=-1)
        {
            cout<<"Enter beginning balance:"<<endl;
            cin>>BalanceAtBeginning;
            cout<<"Enter total charges:";
            cin>>TotalCharges;
            cout<<"Enter total credit: ";
            cin>>TotalCredit;
            cout<<"Enter credit limit: "<<'\n';
            cin>>AllowedCreditLimit;
            cout<<'\n';



            NewBalance=BalanceAtBeginning+TotalCharges-TotalCredit;


            cout<<"New Balance is:"<<NewBalance<<'\n';
            cout<<"Account: "<<AccountNumber<<'\n';
            cout<<"Credit Limi:"<<AllowedCreditLimit<<'\n';
            cout<<"Balance:"<<NewBalance<<'\n';


            if(NewBalance>AllowedCreditLimit)
            {
            cout<<"Credit Limit Excedded !"<<'\n';
            cout<<'\n';
            }
        }
    }
    return 0;
}
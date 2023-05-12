#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


int main()
{
    double amount;
    double princpale=24.0;
    double rate=0.05;

    cout<<"Year"<<"Amount on deposit"<<endl;
    cout<<fixed<<setprecision(2);

    for(int j=0;j<=5;j++)
    {
        for(unsigned int year=1;year<=387;++year)
        {
            amount+=princpale*pow(1.0+rate,year);

            
        }
        cout<<setw(10)<<amount;
        cout<<'\n';
        rate=rate+0.01;
        amount=0;
    }
    

    return 0;
}
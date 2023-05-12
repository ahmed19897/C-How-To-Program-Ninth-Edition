#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


int main()
{
    int amountIndollars;
    int amountInPennies;
    int rawAmount;
    int principle=100000;
    double rate=0.05;
    cout<<"Year"<<setw(21)<<"Amount on deposit"<<endl;

    cout<<fixed<<setprecision(2);

    for(unsigned int year=1;year<=10;year++)
    {

        rawAmount=(principle*pow(1.0+rate,year));
        amountIndollars=rawAmount/100;
        amountInPennies=rawAmount-(amountIndollars*100);


        cout<<setw(4)<<year<<setw(21)<<amountIndollars<<'.'<<amountInPennies<<endl;




    }





    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double consumedHours);

int main()
{
    double userinput=0;
    int counter=1;
    double totalhours;
    double totalcharges;

    cout<<"Please enter the consumed hours: "<<endl;
    cin>>userinput;
    
    cout<<setw(10)<<"Car"<<setw(10)<<"Hours"<<setw(10)<<"Charges"<<endl;

    while(userinput!=0)
    {
        totalcharges+=calculateCharges(userinput);
        totalhours+=userinput;
        cout<<setw(10)<<counter<<setw(10)<<userinput<<setw(10)<<calculateCharges(userinput)<<endl;
        counter++;
        cin>>userinput;
    }
    cout<<setw(10)<<"TOTAL"<<setw(10)<<totalhours<<setw(10)<<totalcharges<<endl;
    return 0;
}

double calculateCharges(double consumedHours)
{
    double customerCharges=0.0;

if(consumedHours<=3)
{
    customerCharges=2.00;
}
else if(consumedHours>3 && consumedHours<24)
{
    consumedHours-=3;
    customerCharges=(consumedHours*0.5)+2;
}
else
customerCharges=10.0;

return customerCharges;
}
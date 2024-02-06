#include <iostream>
#include <stdexcept>
#include"Salariedemployee.h"

using namespace std;

Salariedemployee::Salariedemployee(const string &firstname,const string &lastname,const string &ssn,Date employeedate,double weeklysalary)
:Employee(firstname,lastname,ssn,employeedate)
{
    SetWeeklysalary(weeklysalary);
}


//putting the destructor in the code here is nessecery so we can overcome the undefined referece to vtable
Salariedemployee::~Salariedemployee()
{

}

void Salariedemployee::SetWeeklysalary(double weeklysalary)
{
    if(weeklysalary>0.0)
    {
        Weeklysalary=weeklysalary;
    }
    else
    {
        throw invalid_argument("Weekly salary must be bigger than 0.0");
    }
}


double Salariedemployee::GetWeeklysalary(void)const
{
    return Weeklysalary;
}

double Salariedemployee::Earnings(void) const
{
    return GetWeeklysalary();
}

void Salariedemployee::Print(void) const
{
    cout<<"\tSalaried Employee\n";
    Employee::Print();
    cout<<"Weekly Salary:\t"<<GetWeeklysalary()<<endl;
}

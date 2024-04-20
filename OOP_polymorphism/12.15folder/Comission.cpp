#include "Comission.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Comission::Comission(const string &firstname,const string &lastname,const string &ssn,Date employeedate,double comissinorate,double grosssales)
:Employee(firstname,lastname,ssn,employeedate)
{
    SetComissionrate(comissinorate);
    SetGrosssales(grosssales);
}
Comission::~Comission()
{

}



void Comission::SetComissionrate(double comissionrate)
{
    if(comissionrate>0.0)
    {
        ComissionRate=comissionrate;
    }
    else
    {
        throw invalid_argument("Commission Rate must be bigger than 0.0");
    }
}
double Comission::GetComissionrate(void)const
{
    return ComissionRate;
}



void Comission::SetGrosssales(double grosssales)
{
    if(grosssales>0.0)
    {
        GrossSales=grosssales;
    }
    else
    {
        throw invalid_argument("Grosss sales must be bigger than 0.0");
    }
}
double Comission::GetGrosssales(void)const
{
    return GrossSales;
}




double Comission::Earnings(void) const
{
    return GetComissionrate()*GetGrosssales();
}
void Comission::Print(void) const
{
    cout<<"\tCommission Employee\n";
    Employee::Print();
    cout<<"Commission Rate:"<<GetComissionrate()<<"\nGross Sales:\t"<<GetGrosssales()<<endl;
}
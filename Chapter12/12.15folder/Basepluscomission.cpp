#include <iostream>
#include <stdexcept>
#include "Basepluscomission.h"

using namespace std;

Basepluscomission::Basepluscomission(const string &firstname,const string &lastname,const string &ssn,Date employeedate,double comissinorate,double grosssales,double basesalary)
:Comission(firstname,lastname,ssn,employeedate,comissinorate,grosssales)
{
    SetBasesalary(basesalary);
}
Basepluscomission::~Basepluscomission()
{

}


void Basepluscomission::SetBasesalary(double basesalary)
{
    if(basesalary>0.0)
    {
        BaseSalary=basesalary;
    }
    else
    {
        throw invalid_argument("base salary value must be bigger than 0.0");
    }
}
double Basepluscomission::GetBasesalary(void)const
{
    return BaseSalary;
}




double Basepluscomission::Earnings(void) const
{
    return GetBasesalary()+Comission::Earnings();
}
void Basepluscomission::Print(void) const
{
    cout<<"\tBase plus comission Employee\n";
    Comission::Print();
    cout<<"Base Salary:\t"<<GetBasesalary()<<endl;
}
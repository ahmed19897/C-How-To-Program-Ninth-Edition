#include<iostream>
#include"ComissionEmployee.h"

using namespace std;

ComissionEmployee::ComissionEmployee(const std::string &first, const std::string &last, const std::string &ssn, double grossSales,double  comissionRate)
:FirstName(first),LastName(last),SSN(ssn)
{
    setGrossSales(grossSales);
    setComissionRate(comissionRate);
}

void ComissionEmployee::setFirstName(const string & firstname)
{
    FirstName=firstname;
}

string ComissionEmployee::getFirstName(void) const
{
    return FirstName;
}




void ComissionEmployee::setLastName(const string & lastname)
{
    LastName=lastname;
}

string ComissionEmployee::getLastName(void) const
{
    return LastName;
}




void ComissionEmployee::setSSN(const string & ssn)
{
    SSN=ssn;
}

string ComissionEmployee::getSSN(void) const
{
    return SSN;
}




void ComissionEmployee::setGrossSales(double  grosssales)
{
    if(grosssales>0.0)
    {
        GrossSales=grosssales;
    }
    else
        throw invalid_argument("Gross Sales must be bigger than 0.0");
}

double ComissionEmployee::getGrossSales(void) const
{
    return GrossSales;
}





void ComissionEmployee::setComissionRate(double  comissionRate)
{
    if(comissionRate>0.0 && comissionRate<1.0)
    {
        ComissionRate=comissionRate;
    }
    else
        throw invalid_argument("comission rate must be bigger than 0.0 and less than 1.0");
}

double ComissionEmployee::getComissionRate(void) const
{
    return ComissionRate;
}




double ComissionEmployee::earning() const
{
    return getGrossSales()*getComissionRate();
}

void ComissionEmployee::print() const
{
    cout<<"ComissionEmployee: "<<getFirstName()<<' '<<getLastName()<<' '<<"\nSSN: "<<getSSN()<<"\nGross Sales: "<<getGrossSales()<<"\nComission Rate: "<<getComissionRate();
}

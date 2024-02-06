#include "Hourlyworker.h"
#include <stdexcept>
#include<iostream>


Hourlyworker::Hourlyworker(const string &firstname,const string &lastname,const string &ssn,Date employeedate,double variablewage,int Hours)
:Employee(firstname,lastname,ssn,employeedate)
{
    SetVariablewage(variablewage);
    SetHours(Hours);
}
Hourlyworker::~Hourlyworker()
{
}



void Hourlyworker::SetVariablewage(double variablewage)
{
    if(variablewage>0.0)
    {
        VariableWage=variablewage;
    }
    else
    {
        throw invalid_argument("variable wage must be bigger than 0.0");
    }
}
double Hourlyworker::GetVariablewage(void)const
{
    return VariableWage;
}
void Hourlyworker::SetHours(int hours)
{
    if(hours>0.0)
    {
        Hours=hours;
    }
    else
    {
        throw invalid_argument("Number of pieces must be bigger than 0.0");
    }

}
int Hourlyworker::GetHours(void)const
{
    return Hours;
}



double Hourlyworker::Earnings() const
{
    double TotalEarnings=0;
    double Overtimehours=0;
    if(Hours>40)
    {
        Overtimehours=GetHours()-40;
        TotalEarnings+=(GetVariablewage()*1.5)*(Overtimehours); 

    }
    TotalEarnings+=GetVariablewage()*(GetHours()-Overtimehours); 

    return TotalEarnings;    
}
void Hourlyworker::Print() const
{
    Employee::Print();
    cout<<"Employee Variable wage: "<<GetVariablewage()
    <<"Employee Number of Pieces: "<<GetHours();
}
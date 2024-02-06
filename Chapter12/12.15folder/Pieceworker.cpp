#include "Pieceworker.h"
#include <stdexcept>
#include<iostream>


Pieceworker::Pieceworker(const string &firstname,const string &lastname,const string &ssn,Date employeedate,double variablewage,int numberofpieces)
:Employee(firstname,lastname,ssn,employeedate)
{
    SetVariablewage(variablewage);
    SetNumberOfPieces(numberofpieces);
}
Pieceworker::~Pieceworker()
{
}



void Pieceworker::SetVariablewage(double variablewage)
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
double Pieceworker::GetVariablewage(void)const
{
    return VariableWage;
}
void Pieceworker::SetNumberOfPieces(int numberofpieces)
{
    if(numberofpieces>0.0)
    {
        NumberOfPieces=numberofpieces;
    }
    else
    {
        throw invalid_argument("Number of pieces must be bigger than 0.0");
    }

}
int Pieceworker::GetNumberOfPieces(void)const
{
    return NumberOfPieces;
}



double Pieceworker::Earnings() const
{
    return GetVariablewage()*GetNumberOfPieces();
}
void Pieceworker::Print() const
{
    Employee::Print();
    cout<<"Employee Variable wage: "<<GetVariablewage()
    <<"Employee Number of Pieces: "<<GetNumberOfPieces();
}
#include<iostream>
#include "BaseComissionEmployee.h"

using namespace std;


//inheratance
// BaseComissionEmployee::BaseComissionEmployee(const std::string &first, const std::string &last, const std::string &ssn, double grossSales,double  comissionRate,double basesalary)
// :ComissionEmployee(first,last,ssn,grossSales,comissionRate)
// {
//     setBaseSalary(basesalary);
// }

// double BaseComissionEmployee::earning() const
// {
//     return ((ComissionEmployee::getGrossSales()*ComissionEmployee::getComissionRate())+getBaseSalary());
// }

// void BaseComissionEmployee::print() const
// {
//     cout<<"ComissionEmployee: "<<ComissionEmployee::getFirstName()<<' '<<ComissionEmployee::getLastName()<<' '<<"\nSSN: "<<ComissionEmployee::getSSN()<<"\nGross Sales: "<<ComissionEmployee::getGrossSales()<<"\nComission Rate: "<<ComissionEmployee::getComissionRate()<<"\nBase Salary: "<<getBaseSalary();
// }


// void BaseComissionEmployee::setBaseSalary(double basesalary)
// {
//     if(basesalary>0.0)
//     {
//         BaseSalary=basesalary;
//     }
//     else
//         throw invalid_argument("Salary must be bigger than 0.0");
// }
// double BaseComissionEmployee::getBaseSalary(void)const
// {
//     return BaseSalary;
// }





//composition
 BaseComissionEmployee::BaseComissionEmployee(const std::string &first, const std::string &last, const std::string &ssn, double grossSales,double  comissionRate,double basesalary)
 : MyComissionEmployee(first,last,ssn,grossSales,comissionRate)
 {
     setBaseSalary(basesalary);
 }

 double BaseComissionEmployee::earning() const
 {
     return ((MyComissionEmployee.getGrossSales()*MyComissionEmployee.getComissionRate())+getBaseSalary());
 }

 void BaseComissionEmployee::print() const
 {
     cout<<"ComissionEmployee: "<<MyComissionEmployee.getFirstName()<<' '<<MyComissionEmployee.getLastName()<<' '<<"\nSSN: "<<MyComissionEmployee.getSSN()<<"\nGross Sales: "<<MyComissionEmployee.getGrossSales()<<"\nComission Rate: "<<MyComissionEmployee.getComissionRate()<<"\nBase Salary: "<<getBaseSalary();
 }


 void BaseComissionEmployee::setBaseSalary(double basesalary)
 {
     if(basesalary>0.0)
     {
         BaseSalary=basesalary;
     }
     else
         throw invalid_argument("Salary must be bigger than 0.0");
 }
 double BaseComissionEmployee::getBaseSalary(void)const
 {
     return BaseSalary;
 }

 ComissionEmployee BaseComissionEmployee::getComissionEmployee(void)const
 {
    return MyComissionEmployee;
 }
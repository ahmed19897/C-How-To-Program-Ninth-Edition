#include <iostream>
#include <iomanip>
#include "Employee.h"

using namespace std;

//const is used here so we can use "ahmed" in the main program if const is not used the string will no be accepted
Employee::Employee(const string & firstname,const string & lastname, const string & ssn,Date employeedadte)
    :FirstName(firstname),LastName(lastname),SSN(ssn),EmployeeDate(employeedadte)
{  

}

void Employee::SetFirstname(string &firstname)
{
    FirstName=firstname;
}
string Employee::GetFirstname(void)const
{
    return FirstName;
}
void Employee::SetLastname(string &lastname)
{
    LastName=lastname;
}
string Employee::GetLastname(void)const 
{
    return LastName;
}
void Employee::SetSSN(string &ssn)
{
    SSN=ssn;
}
string Employee::GetSSN(void)const
{
    return SSN;
}

int Employee::GetBirthmonth(void)
{
    return EmployeeDate.GetMonth();
}
int Employee::GetBirthday(void)
{
    return EmployeeDate.GetDay();
}



void Employee::Print() const
{

    cout<<"First Name:\t"<<GetFirstname()<<"\nLast Name:\t"<<GetLastname()
    <<"\nSSN:\t\t"<<GetSSN()<<"\nBirthday:\t";
    EmployeeDate.print();

}
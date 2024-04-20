#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

using namespace std;
class Employee
{
    public: 
        Employee(const string &,const string &,const string &,const Date );
        virtual ~Employee(){};

        void SetFirstname(string &);
        string GetFirstname(void)const;

        void SetLastname(string &);
        string GetLastname(void)const; 

        void SetSSN(string &);
        string GetSSN(void)const; 

        int GetBirthmonth(void);
        int GetBirthday(void);

        virtual double Earnings() const =0;
        virtual void Print() const;

    private:
        string FirstName;
        string LastName;
        string SSN;
        Date EmployeeDate;

};





#endif
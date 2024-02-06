#include "Date.h"
#include"Employee.h"
using namespace std;

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

    class Salariedemployee : public Employee
    {
        public:
            Salariedemployee(const string &,const string &,const string &,Date ,double=0.0 );
            virtual ~Salariedemployee();

            void SetWeeklysalary(double );
            double GetWeeklysalary(void)const;

            virtual double Earnings() const;
            virtual void Print() const;


        private:
            double Weeklysalary;
    };
#endif

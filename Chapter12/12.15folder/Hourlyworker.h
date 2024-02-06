#include "Employee.h"

#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

    class Hourlyworker:public Employee
    {
        public:
            Hourlyworker(const string &,const string &,const string &,Date,double=0.0,int=0);
            virtual ~Hourlyworker();

            void SetVariablewage(double);
            double GetVariablewage(void)const;

            void SetHours(int);
            int GetHours(void)const;


            virtual double Earnings() const;
            virtual void Print() const;

        private:
            double VariableWage;
            int Hours;
    };
    

    


#endif
#include <string>
#include "Date.h"
#include "Employee.h"


#ifndef COMISSION_H
#define COMISSION_H

    class Comission : public Employee
    {
        public:
            Comission(const string &,const string &,const string &,Date,double=0.0,double=0.0);
            virtual ~Comission();

            void SetComissionrate(double);
            double GetComissionrate(void)const;

            void SetGrosssales(double);
            double GetGrosssales(void)const;

            virtual double Earnings() const;
            virtual void Print() const;           


        private:
            double ComissionRate;
            double GrossSales;
    };
#endif
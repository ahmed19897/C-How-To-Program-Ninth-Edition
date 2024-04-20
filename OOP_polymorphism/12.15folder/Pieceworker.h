#include "Employee.h"

#ifndef PIECEWORKER_H
#define PIECEWORKER_H

    class Pieceworker:public Employee
    {
        public:
            Pieceworker(const string &,const string &,const string &,Date,double=0.0,int=0);
            virtual ~Pieceworker();

            void SetVariablewage(double);
            double GetVariablewage(void)const;

            void SetNumberOfPieces(int);
            int GetNumberOfPieces(void)const;


            virtual double Earnings() const;
            virtual void Print() const;

        private:
            double VariableWage;
            int NumberOfPieces;
    };
    

    


#endif
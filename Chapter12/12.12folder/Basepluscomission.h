#include "Comission.h"

#ifndef BASEPLUSCOMISSION_H
#define BASEPLUSCOMISSION_H

    class Basepluscomission : public Comission
    {
        public:
            Basepluscomission(const string &,const string &,const string &,Date ,double=0.0,double=0.0,double=0.0);
            virtual ~Basepluscomission();

            void SetBasesalary(double);
            double GetBasesalary(void)const;

            virtual double Earnings() const;
            virtual void Print() const;           


        private:
            double BaseSalary;
    };
    

    



#endif
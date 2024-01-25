#ifndef BASECOMISSIONEMPLOYEE_H
#define BASECOMISSIONEMPLOYEE_H

    #include<string>
    #include "ComissionEmployee.h"


    //inhertance
    // class BaseComissionEmployee:public ComissionEmployee
    // {
    //     public:
    //         BaseComissionEmployee(const std::string &, const std::string &, const std::string &, double=0.0,double=0.0,double=0.0);

    //         void setBaseSalary(double);
    //         double getBaseSalary(void)const;

    //         double earning()const;
    //         void print()const;


    //     private:
    //         double BaseSalary;

    // };


    //composition
         class BaseComissionEmployee
     {
         public:
             BaseComissionEmployee(const std::string &, const std::string &, const std::string &, double=0.0,double=0.0,double=0.0);
             void setBaseSalary(double);
             double getBaseSalary(void)const;
             double earning()const;
             void print()const;
             ComissionEmployee getComissionEmployee(void)const;
             
         private:
             double BaseSalary;
             ComissionEmployee MyComissionEmployee;
     };

#endif
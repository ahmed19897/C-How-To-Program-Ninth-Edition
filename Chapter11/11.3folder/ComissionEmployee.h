#ifndef COMISSIONEMPLOYEE_H
#define COMISSIONEMPLOYEE_H

#include <string>


class ComissionEmployee
{
    public:
        ComissionEmployee(const std::string &, const std::string &, const std::string &, double=0.0,double=0.0);

        void setFirstName(const std::string &);
        std::string getFirstName(void)const;

        void setLastName(const std::string &);
        std::string getLastName(void)const;


        void setSSN(const std::string &); //ssn -> social security number
        std::string getSSN(void)const;

        void setGrossSales(double);
        double getGrossSales(void)const;


        void setComissionRate(double);
        double getComissionRate(void)const;

        double earning()const;
        void print()const;




    private:
        std::string FirstName;
        std::string LastName;
        std::string SSN;

        double GrossSales;
        double ComissionRate;
};



#endif
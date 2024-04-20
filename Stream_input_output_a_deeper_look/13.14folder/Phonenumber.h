#include <string>
#include <iostream>
#include <iomanip>

#ifndef PHONENUMBER_H
#define PHONENUMBER_H


    class Phonenumber
    {
        friend std::ostream& operator<<(std::ostream &,const Phonenumber &);
        friend std::istream& operator>>(std::istream &, Phonenumber &);
        private:
            char PhoneNumber[15];
            bool state;
            std::string areaCode;
            std::string exchange;
            std::string line;
    };

#endif
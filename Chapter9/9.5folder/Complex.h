#include <iostream>
#include <cmath>

struct complexStruct
    {
        double real;
        double imag;
        complexStruct()
        {
            real=0.0;
            imag=0.0;
        }
    };

#ifndef Complex_h
#define Complex_h

class Complex
{
    public:
        Complex();
        ~Complex();

        complexStruct AddTwoComplexNumbers(complexStruct ,complexStruct);
        complexStruct SubTwoComplexNumbers(complexStruct ,complexStruct);
        void PrintComplexNumber(void)const;

    private:
        complexStruct complexNumber;
        
};

#endif
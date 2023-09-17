#include <iostream>
#include "Complex.h"
using namespace std;


int main()
{

    complexStruct cmp1,cmp2,cmp3,cmp4;
    cmp3.real=0.0,cmp3.imag=0.0;
    Complex Complex1;


    cmp1.real=20.0;
    cmp1.imag=4.0;

    cmp2.real=10.0;
    cmp2.imag=2.0;

    cmp4=Complex1.AddTwoComplexNumbers(cmp1,cmp2);
    cmp4=Complex1.SubTwoComplexNumbers(cmp1,cmp2);

    Complex1.PrintComplexNumber();


    return 0;
}
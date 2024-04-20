#include <iostream>
#include "Rational.h"
using namespace std;


int main()
{
    int num=1,den=2,num2=3,den2=4;

    Rational f1(num,den);

    f1.SubTwoRationalNumbers(num,den,num2,den2);
    f1.PrintRationalNumber();

    f1.AddTwoRationalNumbers(num,den,num2,den2);
    f1.PrintRationalNumber();

    f1.MultiTwoRationalNumbers(num,den,num2,den2);
    f1.PrintRationalNumber();

    f1.DivTwoRationalNumbers(num,den,num2,den2);
    f1.PrintRationalNumber();
    f1.PrintFloatingNumber();

    return 0;
}
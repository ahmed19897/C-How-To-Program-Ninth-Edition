#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex()
    
{
    std::cout<<"Constructor called !"<<std::endl;
}

Complex::~Complex()
{
    std::cout<<"Destructor called !"<<std::endl;
}


complexStruct Complex::AddTwoComplexNumbers(complexStruct complexAdd1,complexStruct complexAdd2)
{
    complexNumber.real=complexAdd1.real+complexAdd2.real;
    complexNumber.imag=complexAdd1.imag+complexAdd2.imag;
    return complexNumber;
}

complexStruct Complex::SubTwoComplexNumbers(complexStruct complexSub1 ,complexStruct complexSub2)
{
    complexNumber.real=complexSub1.real-complexSub2.real;
    complexNumber.imag=complexSub1.imag-complexSub2.imag;
    return complexNumber;
}

void Complex::PrintComplexNumber(void)const
{
  std::cout<<"Complex Number is: ("<<complexNumber.real<<','<<complexNumber.imag<<')'<<std::endl;  
}
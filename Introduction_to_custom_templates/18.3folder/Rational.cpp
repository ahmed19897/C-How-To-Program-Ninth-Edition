#include "Rational.h"
#include <iostream>

using namespace std;

Rational::Rational(int numinit,int deninit)
    
{
    std::cout<<"Constructor called !"<<std::endl;
    SimplifyAndSave(numinit,deninit);
 
}

Rational::~Rational()
{
    std::cout<<"Destructor called !"<<std::endl;
}


int Rational::AddTwoRationalNumbers(int num1,int den1,int num2,int den2)
{
    int localnum,localden;

    localnum=(num1*den2)+(den1*num2);
    localden=den1*den2;
    SimplifyAndSave(localnum,localden);

    return num/den;
}

int Rational::SubTwoRationalNumbers(int num1,int den1,int num2,int den2)
{
    int localnum,localden;

    localnum=(num1*den2)-(den1*num2);
    localden=den1*den2;
    SimplifyAndSave(localnum,localden);

    return num/den;
}


int Rational::MultiTwoRationalNumbers(int num1,int den1,int num2,int den2)
{
    int localnum,localden;

    localnum=(num1*num2);
    localden=(den1*den2);
    SimplifyAndSave(localnum,localden);

    return num/den;
}
int Rational::DivTwoRationalNumbers(int num1,int den1,int num2,int den2)
{
    int localnum,localden;

    localnum=(num1*den2);
    localden=(den1*num2);
    SimplifyAndSave(localnum,localden);

    return num/den;
}


void Rational::PrintRationalNumber(void)const
{
  std::cout<<"Rational Number is: ("<<num<<'/'<<den<<')'<<std::endl;  
}
void Rational::PrintFloatingNumber(void)const
{
  std::cout<<"Floating Number is: "<<(static_cast<double>(num)/static_cast<double>(den))<<std::endl;  
}








void Rational::SimplifyAndSave(int numinit,int deninit)
{
    int divisor;
    if(numinit !=1 && deninit !=1)
    {
        divisor=abs(gcd(numinit,deninit));
        num=numinit/divisor;
        den=deninit/divisor;
    }
    else
    {
        num=numinit;
        den=deninit;
    }
}

// Recursive function to return gcd of a and b
long long Rational::gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 

 bool Rational::operator==( Rational &op2)const  
{

    return ((this->den) == (op2.den)   &&   (this->num) == (op2.num)  );
}

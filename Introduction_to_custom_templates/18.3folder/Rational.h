#include <iostream>
#include <cmath>

#ifndef Rational_h
#define Rational_h
class Rational
{
    public:
        Rational(int =1,int =1);
        ~Rational();

        int AddTwoRationalNumbers(int num1,int den1,int num2,int den2);
        int SubTwoRationalNumbers(int num1,int den1,int num2,int den2);
        int MultiTwoRationalNumbers(int num1,int den1,int num2,int den2);
        int DivTwoRationalNumbers(int num1,int den1,int num2,int den2);  
        void PrintRationalNumber(void)const;
        void PrintFloatingNumber(void)const;
        bool operator==( Rational &)const;

    private:
        void SimplifyAndSave(int,int);
        long long gcd(long long int a, long long int b);
        int num;
        int den;
        
};
#endif
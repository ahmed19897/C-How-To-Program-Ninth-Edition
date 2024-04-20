#include <iostream>
#include "Complex.h"
using namespace std;

//constructor
    Complex::Complex(double realpart,double imaginarypart)
        :real(realpart),imaginary(imaginarypart)
    {
        //empty body
    }

//addition
    Complex Complex::operator+(const Complex &operand2) const
    {
        return Complex(real + operand2.real , imaginary + operand2.imaginary);
    }

//subtraction
    Complex Complex::operator-(const Complex &operand2) const
    {
        return Complex(real - operand2.real ,imaginary - operand2.imaginary);
    }

//multiplication
    Complex Complex::operator*(const Complex &operand2) const
    {
        return Complex(real * operand2.real ,imaginary * operand2.imaginary);
    }

//is equal
    bool Complex::operator==(const Complex &operand2)const
    {
        return (real==operand2.real && imaginary==operand2.imaginary);
    }

//is not equal
    bool Complex::operator!=(const Complex &operand2)const
    {
        return (real!=operand2.real || imaginary!=operand2.imaginary);
    }

//input
    istream &operator>>( std::istream & input , Complex & UserComplex)
    {
        input>> UserComplex.real;
        input>> UserComplex.imaginary;

        return input;
    }

//output
    ostream &operator<<( std::ostream & output, const Complex & UserComplex)
    {
        output<<'(' ;
        output<< UserComplex.real;
        output<<",";
        output<< UserComplex.imaginary;
        output<<"i)";

        return output;
    }
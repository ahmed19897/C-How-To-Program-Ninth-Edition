//Complex class member-function definition
#ifndef COMPLEX_H
#define COMPLEX H

    class Complex
    {
        friend std::ostream &operator<<( std::ostream &, const Complex & );
        friend std::istream &operator>>( std::istream &, Complex & );

        public:
            explicit Complex  (double=0.0, double=0.0); // constructor
            Complex operator+ ( const Complex &)const;  // addition overloaded
            Complex operator- ( const Complex &)const;  // subtraction overloaded
            Complex operator* ( const Complex &)const;  // multiplication overloaded
            bool    operator==( const Complex &)const;  // is equal overloaded
            bool    operator!=( const Complex &)const;  // is not equal overloaded

        private:
            double real;                               // real part of the imaginary number
            double imaginary;                          // imaginary part of the imaginary number
    };

#endif
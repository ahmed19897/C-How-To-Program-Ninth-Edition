//Complex class member-function definition
#ifndef COMPLEX_H
#define COMPLEX H
template <typename T>
    class Complex
    {
        public:
                Complex(T realpart,T imaginarypart)
                :real(realpart),imaginary(imaginarypart)
                {
                    //empty body
                }
                bool operator==(const Complex &operand2)const
                {
                    return (real==operand2.real && imaginary==operand2.imaginary);
                }
                 bool operator!=(const Complex &operand2)const
                {
                    return (real!=operand2.real || imaginary!=operand2.imaginary);
                }   
        private:
            T real;                               // real part of the imaginary number
            T imaginary;                          // imaginary part of the imaginary number
    };

#endif
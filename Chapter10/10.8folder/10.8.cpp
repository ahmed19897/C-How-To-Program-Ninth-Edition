#include <iostream>
#include "Complex.h"

#include <complex>

using namespace std;

int main()
{
    Complex MyComplex (1.0,1.0);
    Complex MyComplex2(2.0,2.0);
    Complex MyComplex3;

    MyComplex3=MyComplex*MyComplex2;

    cout << MyComplex  <<endl;
    cout << MyComplex2 <<endl;
    cout << MyComplex3 <<endl;

    cout<< (MyComplex2!=MyComplex)<<endl;




    return 0;
}
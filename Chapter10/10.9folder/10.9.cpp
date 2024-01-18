#include "Hugeint.h"
#include <iostream>

using  namespace std;

int main()
{
    Hugeint MyInt=123456789;
    Hugeint MyInt2=123;
    Hugeint MyInt3=1234;
    Hugeint MyInt4=1234;


    MyInt=MyInt+123456;
    cout<<MyInt<<endl;



    MyInt2=MyInt2*456;
    cout<<MyInt2<<endl;


    //cout<<(MyInt3!=MyInt4)<<endl;
    cout<<(MyInt3==MyInt4)<<endl;
    cout<<(MyInt3<MyInt4)<<endl;
    cout<<(MyInt3>MyInt4)<<endl;




    return  0;
}
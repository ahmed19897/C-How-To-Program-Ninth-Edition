#include <iostream>
#include "Rational.h"
using namespace  std;

struct Mystruct
{
    int x;
    double xx;
};

template < class t >  void isequal( t value1, t value2);


int main()
{
    Rational myrational1(12,12);
    Rational myrational2(12,12);
    bool result=false;
    
    Mystruct st1;
    Mystruct st2;

    st1.x=10;
    st1.x=20;

    isequal(10.2,10.2);
    isequal(10,9);

    myrational1==myrational2;
    //cout<<isequal(st1.x,st2.x);
    isequal(myrational1,myrational2);

    return 0;
}

template < class t >  void isequal( t value1, t value2)
{
    cout<<"Equal:"<<(value1==value2)<<endl;
}
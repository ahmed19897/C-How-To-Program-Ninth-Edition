#include "HugeInteger.h"
#include <array>
#include <iostream>
using namespace std;
HugeInteger::HugeInteger(long *localllptr)
{
    llptr=localllptr;
}
HugeInteger::~HugeInteger()
{
}
void HugeInteger::input(int arrayindex)
{
    llptr=llptr+arrayindex;
    myarray[arrayindex]=*llptr;
}
void HugeInteger::output(int arrayindex)
{   
    if(sizeof(myarray)-1>=arrayindex)
    cout<<myarray[arrayindex]<<endl;
    else
        throw invalid_argument("out of index output request");
}
long  HugeInteger::add(int int1,int int2)
{
    if(sizeof(myarray)-1>=int1 &&sizeof(myarray)-1>=int2)
    {
        return (myarray[int1]+myarray[int2]);
    }
    else
        throw invalid_argument("out of range index for add");
}
long   HugeInteger::sub(int int1,int int2)
{
        if(sizeof(myarray)-1>=int1 &&sizeof(myarray)-1>=int2)
    {
        return (myarray[int2]-myarray[int1]);
    }
    else
        throw invalid_argument("out of range index for sub");
}
bool  HugeInteger::isEqual(int int1,long long1) const
{
    return myarray[int1]==long1;
}
bool  HugeInteger::isNotEqual(int int1,long long1) const
{
    return myarray[int1]!=long1;
}
bool  HugeInteger::isGreater(int int1,long long1) const
{
    return myarray[int1]>long1;
}
bool  HugeInteger::isLess(int int1,long long1) const
{
    return myarray[int1]<long1;
}
bool  HugeInteger::isGreaterthanorequal(int int1,long long1) const 
{
    return myarray[int1]>=long1;
}
bool  HugeInteger::isLessthanorequal(int int1,long long1) const
{
    return myarray[int1]<=long1;
}
bool HugeInteger::isZero(int int1)const
{
    return myarray[int1]==0;
}
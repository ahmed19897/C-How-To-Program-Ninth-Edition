#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

template < class Min >//or template <typename Min>
Min Maximum(Min value1,int value2)
{
    if(value1>value2)
    {
        return value1;
    }
    else
        return value2;
}
int cube(int x){
    return x*x*x;
}
double cube(double x)
{
    return x*x*x;
}

int main()
{

double x;

cout<<Maximum('a','A')<<endl;


    return 0;
}
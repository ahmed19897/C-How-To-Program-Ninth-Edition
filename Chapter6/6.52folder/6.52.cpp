#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

template < class Min >//or template <typename Min>
Min Minimum(Min value1,Min value2)
{
    if(value1<value2)
    {
        return value1;
    }
    else
        return value2;
}


int main()
{

cout<<Minimum('a','A')<<endl;


    return 0;
}
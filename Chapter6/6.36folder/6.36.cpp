#include<iostream>
#include<iomanip>
using namespace std;
int power(int base,int exponent);
int main()
{

    cout<<power(2,4)<<endl;




    return 0;
}

int power(int base,int exponent)
{

    if(exponent==1)
    {
        return base;
    }
    else
        return base* power(base,exponent-1);

        
}
#include<iostream>
#include<iomanip>

int integerPower(int base,int exponent);



int main()
{


std::cout<<integerPower(2,4)<<std::endl;






    return 0;
}

int integerPower(int base,int exponent)
{

    if(1==exponent)
    {
        return base;
    }
    else
    {
        return base*(integerPower(base,exponent-1));
    }
    
    
}
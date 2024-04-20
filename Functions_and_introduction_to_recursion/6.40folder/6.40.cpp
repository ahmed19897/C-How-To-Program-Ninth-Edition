#include<iostream>
#include<iomanip>
using namespace std;
unsigned long factorial(unsigned long number);
int main()
{
    for(unsigned int counter=0;counter<=6;counter++)
    {
        cout<<setw(2)<<counter<<"!= "<<factorial(counter)<<endl;
    }



    return 0;
}

unsigned long factorial(unsigned long number)
{
    if(number<=1)
    {
        cout<<"Result is :";
        return 1;
    }
    else 
    {
    cout<<setw(2)<<number<<"*"<<'\n'<<'\t';
    return number*factorial(number-1);
    }
}
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main()
{
int blank=4;

int astr=1;
int numberoflines=9;

    for(int i=1;i<=numberoflines;i++)
    {
        for(int j=1;j<=blank;j++)
        {
        cout<<' ';
        }
        for(int k=1;k<=astr;k++)
        {   
            cout<<"*";
        }
        cout<<endl;
        if(i<5)
        {
            blank--;
            astr=astr+2;
        }
        if(i>5)
        {
            blank++;
            astr=astr-2;
        }
        if(i==5)
        {
            blank=1;
            astr=7;
        }
    }
    return 0;
}
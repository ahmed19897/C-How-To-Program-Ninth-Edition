#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
int astr=1;
int numberoflines=0;
int blank=0;
int astr2=0;
int midline=0;
cout<<"please enter the number of lines"<<endl;
cin>>numberoflines;
if(numberoflines%2!=0)
{
    midline=(numberoflines/2)+1;
    blank=(numberoflines/2);
}
else
{
    cerr<<"you entered a non odd number!"<<endl;
    numberoflines=0;
}
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
        if(i<midline)
        {
            blank--;
            astr=astr+2;
        }
        if(i>midline)
        {
            blank++;
            astr=astr-2;
        }
        if(i==midline)
        {
            blank=1;
            astr=numberoflines-2;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
int  side1,side2,side3;

cout<<"Enter 3 sides: "<<endl;

cin>>side1>>side2>>side3;

if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
{
    cout<<"These are the sides of a triangle"<<'\n'<<endl;
    if((side1*side1)==(side2*side2)+(side3*side3))
    {
        cout<<"Right angle is 90"<<endl;
    }
    else if ((side2*side2)==(side1*side1)+(side3*side3))
    {
        cout<<"Right angle is 90"<<endl;
    }
    else if ((side3*side3)==(side2*side2)+(side1*side1))
    {
        cout<<"Right angle is 90"<<endl;
    }
}
else
    cout<<"These are not !";



    return 0;
}
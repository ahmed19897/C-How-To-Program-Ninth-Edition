#include <iostream>
using namespace std;

int main()
{
int  side1,side2,side3;

cout<<"Enter 3 sides: "<<endl;

cin>>side1>>side2>>side3;

if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
{
    cout<<"These are the sides of a triangle";
}
else
    cout<<"These are not !";



    return 0;
}
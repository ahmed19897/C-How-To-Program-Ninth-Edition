#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle R1(1,3,4,3,1,1,4,1); //Rectangle coordinates
    Rectangle R2(1,2,2,2,1,1,2,1); //Square coordinates


    cout<<"The Lenght is:"<<R1.Get_Lenght()<<endl;
    cout<<"The Width is:"<< R1.Get_Width()<<endl;
    cout<<"The Parameter is:"<<R1.Calculate_Parameter()<<endl;
    cout<<"The Area is:"<<R1.Calculate_Area()<<endl;
    cout<<"is this a square ? "<<R1.IsSquare();

    return 1;
}
#include "Rectangle.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{              //tl1//tl2//tr1//tr2//bl1//bl2//br1//br2
    Rectangle R1(1   ,6   ,11   ,6   ,1   ,1   ,11  ,1); //Rectangle coordinates
    Rectangle R2(1,10,11,10,1,1,11,1); //Square coordinates


    cout<<"The Lenght is:"<<R1.Get_Lenght()<<endl;
    cout<<"The Width is:"<< R1.Get_Width()<<endl;
    cout<<"The Parameter is:"<<R1.Calculate_Parameter()<<endl;
    cout<<"The Area is:"<<R1.Calculate_Area()<<endl;
    cout<<"is this a square ? "<<R1.IsSquare()<<endl;
    R1.Draw();


    cout<<"The Lenght is:"<<R2.Get_Lenght()<<endl;
    cout<<"The Width is:"<< R2.Get_Width()<<endl;
    cout<<"The Parameter is:"<<R2.Calculate_Parameter()<<endl;
    cout<<"The Area is:"<<R2.Calculate_Area()<<endl;
    cout<<"is this a square ? "<<R2.IsSquare()<<endl;
    R2.Draw();


        



    return 1;
}
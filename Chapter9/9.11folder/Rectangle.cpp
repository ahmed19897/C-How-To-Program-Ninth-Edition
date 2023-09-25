#include "Rectangle.h"
#include <iostream>
#include <stdexcept>
using namespace std;


Rectangle::Rectangle(float l,float w)
{
    Set_Lenght(l);
    Set_Width(w);
}


Rectangle::~Rectangle()
{

}

float Rectangle::Calculate_Parameter(float localLenght,float localWidth)
{
    return ((localLenght+localWidth)*2);
}



float Rectangle::Calculate_Area(float localLenght,float localWidth)
{
    return (localLenght*localWidth);
}


void Rectangle::Set_Lenght(float Locallenght)
{
    if(Locallenght<20.0 && Locallenght>0)
    {
        this->lenght=Locallenght;
    }
    else
        throw invalid_argument("Lenght value must be between 0.0 and 20.0");
    
}




void Rectangle::Set_Width(float LocalWidth)
{
    if(LocalWidth<20.0 && LocalWidth>0.0)
    {
        this->width=LocalWidth;
    }

    else
        throw invalid_argument("Lenght value must be between 0.0 and 20.0");
}


float Rectangle::Get_Lenght(void)
{
    return this->lenght;
}
float Rectangle::Get_Width(void)
{
    return this->width;
}
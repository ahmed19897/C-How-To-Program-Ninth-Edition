#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
Rectangle::Rectangle(float tl1,float tl2,float tr1,float tr2,float bl1 ,float bl2 ,float br1 ,float br2 )
{

    if(tl1<tr1 && bl1<br1 && tl2>bl2 && tr2 > br2)
    {
        Set_Dimension(tl1,tl2,tr1,tr2,bl1,bl2,br1,br2);
        this->tl1=tl1;
        this->tl2=tl2;
        this->tr1=tr1;
        this->tr2=tr2;
        this->bl1=bl1;
        this->bl2=bl2;
        this->br1=br1;
        this->br2=br2; 
    }
    else    
    throw invalid_argument("invalid coordinates");

}
Rectangle::~Rectangle()
{

}
float Rectangle::Calculate_Parameter()
{
    return ((Lenght1+Width1)*2);
}
float Rectangle::Calculate_Area()
{
    return (Lenght1*Width1);
}
void Rectangle::Set_Dimension(float tl1,float tl2,float tr1,float tr2,float bl1 ,float bl2 ,float br1 ,float br2 )
{
    if(tl1>0.0 && tl2>0.0 && tr1>0.0 && tr2>0.0 && bl1>0.0 && bl2>0.0 && br1>0.0 && br2>0.0)
    {
        if(tl1+tr1>=tl2+bl2)
        {
            Set_Lenght(tr1,tl1);
            Set_Width(tl2,bl2);
        }
        else if (tl1+tr1<=tl2+bl2)
        {
            Set_Lenght(tl2,bl2);
            Set_Width(br1,bl1);
        }
    }
    else
        throw invalid_argument("all values must be bigger than 0.0");
}
void Rectangle::Set_Lenght(float Locallenght2,float Locallenght1)
{
    if(Locallenght2-Locallenght1<=20.0)
    {
        this->Lenght1=Locallenght2-Locallenght1;
        this->Lenght2=Locallenght2-Locallenght1;
    }
    else
        throw invalid_argument("Lenght value calculated shouldn't be bigger than 20.0");
    
}
void Rectangle::Set_Width(float LocalWidth2,float LocalWidth1)
{
    if(LocalWidth2-LocalWidth1<=20.0)
    {
        this->Width1=LocalWidth2-LocalWidth1;
        this->Width2=LocalWidth2-LocalWidth1;
    }

    else
        throw invalid_argument("Width value calculated shouldn't be bigger than 20.0");
}
float Rectangle::Get_Lenght(void) const
{
    return this->Lenght1;
}
float Rectangle::Get_Width(void) const
{
    return this->Width1;
}
bool Rectangle::IsSquare()const
{
    return Lenght1==Width1;
}

void Rectangle::SetFillCharacter()
{
    cout<<"please enter the character you want to draw with:"<<endl;
    cin>>FillCharacter;
}

void Rectangle::SetParameterCharacter()
{
    cout<<"please enter the character you want to set the parameter  with:"<<endl;
    cin>>FillParameter; 
}

void Rectangle::Draw()
{
    SetFillCharacter();
    SetParameterCharacter();
    for(int i=0;i<25;i++)
    {
        if(!(i==0 || i==25-1))
        cout<<FillParameter;
        for(int j=0;j<25;j++)
        {
            if(i==0 || i==25-1)
            cout<<string(1,FillParameter)+' ';
            else if(j<25-1)
            {
                if(j>=tl1 && j<=tr1 && i>=bl2 && i<=tl2)
                {
                    cout<<string(1,FillCharacter)+' ';
                }
                else
                cout<<"  ";
            }
        }
        if(!(i==0 || i==25-1))
        cout<<FillParameter;
        cout<<endl;
    }
}


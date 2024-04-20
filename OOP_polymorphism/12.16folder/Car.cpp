#include"Car.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Car::Car(int maxspeed,int materialusedinconstruction)
:MaxSpeed(maxspeed),Carbonfootprint(materialusedinconstruction)
{
}
Car::~Car()
{
}


void Car::Calculatecarbonfootprint(void) const
{
  cout<<Carbonfootprint::GetMaterialUsedInConstruction()<<endl;
}
void Car::SetMaxspeed(int maxspeed)
{
    if(maxspeed>0)
    {
        MaxSpeed=maxspeed;
    }
    else
    {
        throw invalid_argument("Max speed must be bigger than 0");
   
    }
}
int Car::GetMaxspeed(void)const
{
    return MaxSpeed;
}  
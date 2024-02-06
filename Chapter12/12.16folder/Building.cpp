#include"Building.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Building::Building(int squarefootage,int materialusedinconstruction)
:SquareFootage(squarefootage),Carbonfootprint(materialusedinconstruction)
{
}

Building::~Building()
{
}

void Building::Calculatecarbonfootprint(void) const
{
    cout<<Carbonfootprint::GetMaterialUsedInConstruction()*GetSquareFootage()<<endl;
}
void Building::SetSquareFootage(int sf)
{
    if(sf>0)
    {
        SquareFootage=sf;
    }
    else
    {
        throw invalid_argument("Square footage must be bigger than 0");
   
    }
}
int Building::GetSquareFootage(void)const
{
    return SquareFootage;
}
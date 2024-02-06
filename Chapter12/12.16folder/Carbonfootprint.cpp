#include"Carbonfootprint.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Carbonfootprint::Carbonfootprint(int materialusedinconstruction)
:MaterialUsedInConstruction(materialusedinconstruction)
{
}
Carbonfootprint::~Carbonfootprint()
{
}

void Carbonfootprint::SetMaterialUsedInConstruction(int muic) 
{
    if(muic>0)
    {
        MaterialUsedInConstruction=muic;
    }
    else
    {
        throw invalid_argument("Material used in tons must be bigger than 0");
    }
}
int Carbonfootprint::GetMaterialUsedInConstruction(void)const
{
    return MaterialUsedInConstruction;
}
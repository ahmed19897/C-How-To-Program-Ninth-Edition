#include"Bicycle.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Bicycle::Bicycle(int framesize,int materialusedinconstruction)
:FrameSize(framesize),Carbonfootprint(materialusedinconstruction)
{
}
Bicycle::~Bicycle()
{
}


void Bicycle::Calculatecarbonfootprint(void) const
{
  cout<<Carbonfootprint::GetMaterialUsedInConstruction()*GetFrameSize()<<endl;
}
void Bicycle::SetFrameSize(int framesize)
{
    if(framesize>0)
    {
        FrameSize=framesize;
    }
    else
    {
        throw invalid_argument("Frame size must be bigger than 0");
   
    }
}
int Bicycle::GetFrameSize(void)const
{
    return FrameSize;
}  
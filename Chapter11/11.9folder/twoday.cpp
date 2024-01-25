#include <iostream>
#include "twoday.h"




Twoday::Twoday(const string & name,const string & address ,const string & city,const string & state,int zipsender,int zipreciever ,double weight,double costperounce,double flattfee)
:package(name,address,city,state,zipsender,zipreciever,weight,costperounce)
{
    setFlatfee(flattfee);
}
Twoday::~Twoday()
{

}



void Twoday::setFlatfee(double flatfee)
{
    if(flatfee>0.0)
    {
        FlatFee=flatfee;
    }
    else
        throw   invalid_argument("value must be bigger than 0.0");
}
double Twoday::getFlatfee(void) const
{
   return FlatFee;
}



double Twoday::calculateCost(void)const
{
    return ((getCostperounce()*getWeight())+getFlatfee());
}
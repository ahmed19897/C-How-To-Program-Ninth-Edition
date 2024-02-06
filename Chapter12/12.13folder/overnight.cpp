#include <iostream>
#include "overnight.h"




Overnight::Overnight(const string & name,const string & address ,const string & city,const string & state,int zipsender,int zipreciever ,double weight,double costperounce,double additionalfee)
:package(name,address,city,state,zipsender,zipreciever,weight,costperounce)
{
    setAdditionalfee(additionalfee);
}
Overnight::~Overnight()
{

}



void Overnight::setAdditionalfee(double additionalfee)
{
    if(additionalfee>0.0)
    {
        Additionalfee=additionalfee;
    }
    else
        throw   invalid_argument("value must be bigger than 0.0");
}
double Overnight::getAdditionalfee(void) const
{
   return Additionalfee;
}



double Overnight::calculateCost(void)const
{
    return ((getCostperounce()+getAdditionalfee())*getWeight());
}
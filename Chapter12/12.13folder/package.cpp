#include"package.h"
#include<iostream>

using namespace std;

package::package(const string & name,const string & address ,const string & city,const string & state,int zipsender,int zipreciever ,double weight,double costperounce)
:Name(name),Address(address),City(city),State(state)
{
    setZipsender(zipsender);
    setZipreciever(zipreciever);

    setWeight(weight);
    setCostperounce(costperounce);
}

package::~package()
{

}



void package::setZipsender(int zs) 
{
    Zipsender=zs;
}
int  package::getZipsender(void)const
{
    return Zipsender;
}
void package::setZipreciever(int zr)
{
    Zipreciever=zr;
}
int  package::getZipreciever(void)const
{
    return Zipreciever;
}
void package::setWeight(double w)
{
    if(w>0.0)
        Weight=w;
    else
        throw invalid_argument("weight must be bigger than 0.0");
}
double  package::getWeight(void)const
{
    return Weight;
}
void package::setCostperounce(double cpo)
{
    if(cpo>0.0)
        Costperounce=cpo;
    else
        throw invalid_argument("cost per ounce must be bigger than 0.0");  
}
double  package::getCostperounce(void)const
{
    return Costperounce;
}

double package::calculateCost(void)const
{
    return (getCostperounce()*getWeight());
}


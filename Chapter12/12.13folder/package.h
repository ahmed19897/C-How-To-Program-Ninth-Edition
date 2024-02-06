#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>

using namespace std;

class package
{
private:
    /* data */
    string Name;
    string Address;
    string City;
    string State;
    int Zipsender;
    int Zipreciever;
    double Weight;
    double Costperounce;

public:
    package(const string &,const string & ,const string &,const string &,int=0,int=0,double=0.0,double=0.0);
    virtual ~package();

    void setZipsender(int);
    int getZipsender(void)const;

    void setZipreciever(int);
    int getZipreciever(void)const;


    void setWeight(double);
    double getWeight(void)const;


    void setCostperounce(double);
    double getCostperounce(void)const;

    virtual double calculateCost(void)const;



};



#endif
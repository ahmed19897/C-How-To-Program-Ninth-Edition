#include "IntegerSet.h"
#include <iostream>

IntegerSet::IntegerSet()
{
    for(int i=0;i<100;i++)
    {
        myArray.push_back(false);
    }
}
IntegerSet::IntegerSet(bool *barr,int size)
{
    for(int i=0;i<size;i++)
    {
        myArray.push_back(barr[i]);
    }
}
IntegerSet::~IntegerSet()
{

}
void IntegerSet::DisplaySet()const
{
    for(auto items:myArray)
    {
        if(items==0)
        {
            cout<<'-'<<' ';
        }
        else
        cout<<items<<' ';
    }
    cout<<"\n\n";
}


void IntegerSet::unionOfSets(const vector<bool>& v1,const vector<bool>& v2)
{

    for(int i=0;i<100;i++)
    {
        myArray[i]=v1[i]||v2[i];
    }

}


void IntegerSet::SetIntegerSet()
{
    for(int i=0;i<100;i++)
    {
        myArray[i]=true;
    }
}

void IntegerSet::ResetIntegerSet()
{
    for(int i=0;i<100;i++)
    {
        myArray[i]=false;
    }


}
void IntegerSet::getSet(vector<bool>&v1) 
{
    for(int i=0;i<100;i++)
    {
        v1.push_back(myArray[i]);
    }
}

void  IntegerSet::intersectionOfSets(const vector<bool>& v1,const vector<bool>& v2)
{
    for(int i=0;i<100;i++)
    {
        myArray[i]=v1[i]&&v2[i];
    }
}

void IntegerSet::SetElement(int element)
{
   myArray[element]=true; 
}
void IntegerSet::DeleteElement(int element)
{
    myArray[element]=false; 
}

bool IntegerSet::isEqualSet(const vector<bool>& v1,const vector<bool> v2)
{
    bool isequal=true;

    for(int i=0;i<100;i++)
    {
        if(v1[i]!=v2[i])
        {
           isequal=false; 
        }
    }

    return isequal;
}
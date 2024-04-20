#include <iostream>
#include "Date.h"


using namespace std;


Date::Date(int m,int d,int y)


{
    if((m>0 && m<13) && (d>0 &&d<32) &&(y>0))
    {
        month=m;
        day=d;
        year=y;
    }
    else
    {
        throw invalid_argument("day ,month or year are out of range !");
    }
}


void Date::NextDay()
{
    unsigned int localsec,localmin,localhour;
    //an extra step would be to add which months has 30 and 31 days and calculate if it's a leap year or not 
    //add accessors and set function members
   if(this->day==31)
   {
        day=1;
        if(this->month==12)
        {
            month=1;
            year++; 
        }
        else
        {
            month++; 
        }
   }
   else
   {
        day++;
   }

}





void Date::print()
{
    cout<<month<<'/'<<day<<'/'<<year<<endl;
}
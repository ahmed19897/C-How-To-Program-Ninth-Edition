#include <iostream>
#include "DateandTime.h"
#include <iomanip>
#include <stdexcept>
#include <ctime>
using namespace std;

DateandTime::DateandTime(int m,int d,int y)
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

    time_t curr_time=time(0);
	tm *tm_local = localtime(&curr_time);
 
    setTime(tm_local->tm_hour,tm_local->tm_min,tm_local->tm_sec);  
    cout<<"Constructor called"<<endl;
}
DateandTime::~DateandTime()
{
}
void DateandTime::NextDay()
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
void DateandTime::print()
{
    cout<<month<<'/'<<day<<'/'<<year<<endl;
}
void DateandTime::setTime(unsigned int Localhour,unsigned int Localmin,unsigned int Localsec)
{
    setHour(Localhour);
    setMin(Localmin);
    setSec(Localsec);

}
void DateandTime::setHour(unsigned int Localhour)
{
    if (Localhour>=0 && Localhour<=24)
    {
        hour=Localhour;
    }
    else
        throw invalid_argument("Hours must be within 0-24");
}
void DateandTime::setMin(unsigned int Localmin)
{
    if(Localmin>=0 && Localmin<60)
    {
        min=Localmin;
    }
    else
        throw invalid_argument("Mins must be within 0-59");

}
void DateandTime::setSec(unsigned int Localsec)
{
    if(Localsec>=0 && Localsec<60)
    {
        sec=Localsec;
    }
    else
        throw invalid_argument("sec must be within 0-59");
}   
unsigned int DateandTime::getHour()const
{
    return hour;
}
unsigned int DateandTime::getMin()const
{
    return min;
}
unsigned int DateandTime::getSec()const
{
    return sec;
}
void DateandTime::tick()
{
    unsigned int localsec,localmin,localhour;
   if(this->sec==59)
   {
        setSec(0);
        if(this->min==59)
        {
            setMin(0);
            if(this->hour==24)
            {
                setHour(1);
                NextDay();
            }
            else
            {
                localhour=hour+1;
                setHour(localhour); 
            }
        }
        else
        {
            localmin=min+1;
            setMin(localmin);   
        }
   }
   else
   {
        localsec=sec+1;
        setSec(localsec);
   }

}
void DateandTime::printUniversal()
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMin()<<":"<<setw(2)<<getSec()<<' ';
    DateandTime::print();
}
void DateandTime::printStandard()const
{

    cout<<((getHour()==0 || getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMin()<<":"<<setw(2)<<getSec()<<(hour <12 ?"Am":"PM")<<endl;

}
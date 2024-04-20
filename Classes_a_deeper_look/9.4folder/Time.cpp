#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <ctime>
#include "Time.h"

using namespace std;




Time::Time()
{
	time_t curr_time=time(0);
	tm *tm_local = localtime(&curr_time);
 
    Time::setTime(tm_local->tm_hour,tm_local->tm_min,tm_local->tm_sec);  
    cout<<"Constructor called"<<endl;
}


Time::~Time()
{ 
    cout<<"Destructor called"<<endl;
}



void Time::setTime(unsigned int Localhour,unsigned int Localmin,unsigned int Localsec)
{
    Time::setHour(Localhour);
    Time::setMin(Localmin);
    Time::setSec(Localsec);

}





void Time::setHour(unsigned int Localhour)
{
    if (Localhour>=0 && Localhour<=24)
    {
        Time::hour=Localhour;
    }
    else
        throw invalid_argument("Hours must be within 0-24");
}
void Time::setMin(unsigned int Localmin)
{
    if(Localmin>=0 && Localmin<60)
    {
        Time::min=Localmin;
    }
    else
        throw invalid_argument("Mins must be within 0-59");

}
void Time::setSec(unsigned int Localsec)
{
    if(Localsec>=0 && Localsec<60)
    {
        Time::sec=Localsec;
    }
    else
        throw invalid_argument("sec must be within 0-59");
}   




unsigned int Time::getHour()const
{
    return hour;
}
unsigned int Time::getMin()const
{
    return min;
}
unsigned int Time::getSec()const
{
    return sec;
}




void Time::printUniversal()const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMin()<<":"<<setw(2)<<getSec()<<endl;
}

void Time::printStandard()const
{

    cout<<((getHour()==0 || getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMin()<<":"<<setw(2)<<getSec()<<(hour <12 ?"Am":"PM")<<endl;

}
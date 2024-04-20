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



void Time::setTime(unsigned long Localhour,unsigned long Localmin,unsigned long Localsec)
{
    Time::setSec(Localsec);
    Time::setMin(Localmin);
    Time::setHour(Localhour);

}

void Time::setHour(unsigned int Localhour)
{
    if (Localhour>=0 && Localhour<=24)
    {
        Time::sec+=(Localhour*60*60);
    }
    else
        throw invalid_argument("Hours must be within 0-24");
}
void Time::setMin(unsigned int Localmin)
{
    if(Localmin>=0 && Localmin<60)
    {
        Time::sec+=(Localmin*60);
    }
    else
        throw invalid_argument("Mins must be within 0-59");
}

void Time::setSec(unsigned int Localsec)
{
        if(Localsec>=0 && Localsec<=60)
        {
            Time::sec=Localsec;
        }
        else
            throw invalid_argument("Seconds must be within 0-59");

}   




unsigned long Time::getHour()const
{
    return (this->sec/60/60);
}
unsigned long Time::getMin()const
{
    float LocalMin=(this->sec/60);
    if (LocalMin>=60)
    {
        LocalMin/=60;
        long iLocalMin=LocalMin;
        float fLocalMin=LocalMin-iLocalMin;

        return (fLocalMin*60);
    }
    else
        return LocalMin;
}
unsigned long Time::getSec()const
{
    float LocalSec=(this->sec/60.0);
    if (LocalSec<60.0 && LocalSec >1.0)
    {
        long iLocalSec=LocalSec;
        float fLocalSec=LocalSec-iLocalSec;
        return (  fLocalSec *60);
    }
    else if (LocalSec>=60.0)
    {
        LocalSec=(this->sec/60.0)/60;
        long iLocalSec=LocalSec;
        float fLocalSec=LocalSec-iLocalSec;
        return (fLocalSec*60);
    }
    else
        return LocalSec;
}





void Time::printUniversal()const
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"<<setw(2)<<getMin()<<":"<<setw(2)<<getSec()<<endl;
}

void Time::printStandard()const
{

    cout<<((getHour()==0 || getHour()==12)?12:getHour()%12)<<":"<<setfill('0')<<setw(2)<<getMin()<<":"<<setw(2)<<getSec()<<(sec <86400 ?"Am":"PM")<<endl;

}
#include "Date.h"
#include <iostream>
using namespace std;


Date::Date (int month,int day,int year)
    :Day(day),Year(year)

{
    if (month>0 && month<=12)
    {
        Month=month;
    }
    else
    {
        Month=1;
        cerr<<"Month input is invalid";
    }
        

}





void Date::setMonth(int month)
{
    if (month>0 && month<=12)
    {
        Month=month;
    }
    else
        Month=1;
}
void Date::setDay(int day)
{
    Day=day;
}
void Date::setYear(int year)
{
    Year=year;
}





int Date::getMonth()const
{
    return Month;
}
int Date::getDay()const
{
    return Day;
}
int Date::getYear()const
{
    return Year;
}





void Date::displayDate()const
{
    cout<<getMonth()<<'/'<<getDay()<<'/'<<getYear()<<endl;
}
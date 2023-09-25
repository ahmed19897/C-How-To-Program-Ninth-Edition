#include <iostream>
#include<array>
#include <iomanip>
#include "Date.h"
#include<ctime>

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


Date::Date(int d,int y)
:Date(1,d,y)
{
}


Date::Date(::month monthdname,int d,int y)
:Date(static_cast<int> (monthdname),d,y)
{
}

Date::Date()
{
    const std::time_t now = std::time(nullptr);
    month=localtime(&now)->tm_mon+1;
    day=localtime(&now)->tm_mday;
    year=localtime(&now)->tm_year + 1900;
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





void Date::print()const
{
    array<string,12>monthnames={"Jan","Feb","March","April","May","June","July","Augest","Sept","Oct","Nov","Dec"};
    int userchoice;
    cout<<'\n'<<"choose the format you want: "<<'\n'<<"1-DDD-YYYY"<<'\n'<<"2-MM/DD/YY"<<'\n'<<"3-June 14,2002"<<endl;
    cin>>userchoice;

    switch (userchoice)
    {
    case 1:
        cout<<setfill('0')<<setw(3)<<day<<'-'<<year<<endl;
    break;

    case 2:
        
        cout<<setfill('0')<<setw(2)<<month<<'/'<<setw(2)<<day<<'/'<<year%100<<endl;
    break;

    case 3:
        cout<<setfill('0')<<setw(2)<<monthnames[month-1]<<' '<<day<<','<<year<<endl;
    break;
    
    default:
        throw invalid_argument("you have to choose between 1 ,2  and 3");
    break;
    } 

    
}
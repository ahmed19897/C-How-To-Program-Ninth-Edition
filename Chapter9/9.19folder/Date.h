#include<array>
#include<iostream>
using namespace std;
#ifndef DATE_H
#define DATE_H

enum month{Jan=1,Feb,March,April,May,June,July,Augest,Sept,Oct,Nov,Dec};

class Date
{
    public:
        Date();
        Date(int ,int);
        Date(month  ,int,int);
        Date(int ,int ,int );
        void NextDay();
        void print()const;
        

    private:
         int month;
         int day;
         int year;
        
};



#endif
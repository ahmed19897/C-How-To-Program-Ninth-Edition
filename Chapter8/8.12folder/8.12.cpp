#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
#include <windows.h> 
#include <random>
using namespace std;
#define startingPoint 1
#define endPoint 70

default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,10);

void Move_Tortoise(int *currentTortoisePlace,int *currentHarePlace,bool *terminate);
void Move_Hare(int *currentHarePlace,int *currentTortoisePlace,bool *terminate);
void Show_Tortorise_Position(const int  *currentTortoisePlace);
void Show_Hare_Position(const int *currentHarePlace);


int main()
{
    int currentTortoisePlace=1;
    int currentHarePlace=1;
    bool  terminate=false;
    int  loopcounter=0;

    cout<<"Bang !!!"<<endl;
    cout<<"AND THEY'RE OFF !!!"<<endl;
    while  (terminate!=true && loopcounter<=100)
    {
        Sleep(1000);

        Move_Tortoise(&currentTortoisePlace,&currentHarePlace,&terminate);
        Move_Hare(&currentHarePlace,&currentTortoisePlace,&terminate);

        Show_Tortorise_Position(&currentTortoisePlace);
        Show_Hare_Position(&currentHarePlace);

        if(currentTortoisePlace==currentHarePlace)
        {
            cout<<"OUCH"<<endl;
        }

        loopcounter++;
    }


    if( terminate!=true)
    {
        cout<<"nobody won !"<<endl;
    }
    return 0;
}

void Move_Tortoise(int *currentTortoisePlace,int *currentHarePlace,bool *terminate)
{
    int localRandomNumber=0;

    if(*currentTortoisePlace<startingPoint)
    {
        *currentTortoisePlace=startingPoint;
    }
    else if (*currentTortoisePlace>=70 && !(*currentHarePlace>=70) )
    {
        *terminate=true;
        cout<<"the winner is the Tortoise"<<endl;
    }
    else if (*currentTortoisePlace>=70 && *currentHarePlace>=70)
    {
        *terminate=true;
        cout<<"it's a tie"<<endl;
    }
    else
    {
        localRandomNumber=randomInt(engine);
        if(localRandomNumber>=1 && localRandomNumber<=5)
        {
            *currentTortoisePlace+=3;
        }
        else if ( localRandomNumber==6 || localRandomNumber==7)
        {
                *currentTortoisePlace+=6;
        }
        else
            *currentTortoisePlace++;
    }
}

void Move_Hare(int *currentHarePlace,int *currentTortoisePlace,bool *terminate)
{
    int localRandomNumber=0;

    if(*currentHarePlace<startingPoint)
    {
        *currentHarePlace=startingPoint;
    }
    else if (*currentHarePlace>=70 && !(*currentTortoisePlace>=70))
    {
        *terminate=true;
        cout<<"the winner is the Hare"<<endl;
    }
    else if (*currentTortoisePlace>=70 && *currentHarePlace>=70)
    {
        *terminate=true;
        cout<<"it's a tie"<<endl;
    }
    else
    {
        localRandomNumber=randomInt(engine);
        if(localRandomNumber==1 && localRandomNumber==2)
        {
            ;
        }
        else if ( localRandomNumber==3 || localRandomNumber==4)
        {
                *currentHarePlace+=9;
        }
        else if(localRandomNumber==5)
        {
            *currentHarePlace+=12;
        }
        else if ( localRandomNumber>=6 || localRandomNumber<=8)
        {
                *currentHarePlace++;
        }
        else
            *currentHarePlace+=2;
    } 
}


void Show_Tortorise_Position(const int  *currentTortoisePlace)
{
    for(int i=1;i<=70;i++)
    {
        if(i==*currentTortoisePlace)
        {
            cout<<'T';
        }
        else
        cout<<' ';
    }
    cout<<endl;
}

void Show_Hare_Position(const int *currentHarePlace)
{
    for(int i=1;i<=70;i++)
    {
        if(i==*currentHarePlace)
        {
            cout<<'H';
        }
        else
        cout<<' ';
    }
    cout<<endl;
}
#include "Date.h"





int main()
{

    Date d1(10,2,2020);


    for(int i=0;i<95;i++)
    {
        d1.NextDay();
        d1.print();
    }


    return 0;

}
#include <iostream>
#include <iomanip>
#include <windows.h>
#include "Time.h"





int  main()
{
    Time myTime;

    for(int i=0;i<70;i++)
    {
        Sleep(1000);
        myTime.tick();
        myTime.printStandard();
    }
    


    return 0;
}
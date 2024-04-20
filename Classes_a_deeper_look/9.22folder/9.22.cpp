#include <iostream>
#include <iomanip>
#include <windows.h>
#include "Time.h"





int  main()
{
    Time myTime;
    myTime.setTime(20,40,15);

    myTime.printUniversal();

    return 1;
}
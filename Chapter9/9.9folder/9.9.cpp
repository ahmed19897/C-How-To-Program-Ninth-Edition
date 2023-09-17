#include "DateandTime.h"
#include <windows.h>



int main()
{
    DateandTime dt1(10,2,2020);


    for(int i=0;i<70;i++)
    {
        Sleep(1000);
        dt1.tick();
        dt1.printUniversal();
    }



    
    return 0;
}


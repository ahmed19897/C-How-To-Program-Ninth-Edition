#include "Date.h"
#include <iostream>
#include <iomanip>


using namespace std;


int main()
{
    ::month m;

    m=April;
    Date d1(5,1,2010);
    Date d2(m,18,2020);
    Date d3(10,2023);
    Date d4;

    

    d1.print();
    d2.print();
    d3.print();
    d4.print();


    return 0;

}

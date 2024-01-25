#include<iostream>
#include "twoday.h"
#include "overnight.h"



int main()
{
    package  Mypackage("Package1","Address1"
    ,"Giza","Agouza",123,456,12.0,2.0);


    Twoday   Mypackage2("Package1","Address1"
    ,"Giza","Agouza",123,456,12.0,2.0,24.0);

    Overnight Mypackage3("Package1","Address1"
    ,"Giza","Agouza",123,456,12.0,2.0,10.0);

    double cost,cost2,cost3;


    cost=Mypackage.calculateCost();
    cost2=Mypackage2.calculateCost();
    cost3=Mypackage3.calculateCost();

    cout<<cost<<' '<<cost2<<' '<<cost3<<endl;



    return 0;
}
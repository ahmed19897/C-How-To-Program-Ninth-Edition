#include "Building.h"
#include "Car.h"
#include "Bicycle.h"
#include "Carbonfootprint.h"
#include <vector>
#include <typeinfo>
#include <iostream>

using namespace std;


int main()
{

    Building Mybuilding(12,10);
    Car  Mycar(6,2);
    Bicycle MyBicycle(1,8);

    vector <Carbonfootprint *> MyCarbon(3);

    MyCarbon[0]=&Mybuilding;
    MyCarbon[1]=&Mycar;
    MyCarbon[2]=&MyBicycle;


    for(Carbonfootprint *Carbonfp: MyCarbon)
    {
        cout<<"Current object type->"<<typeid(*Carbonfp).name()<<endl;
        cout<<"Carbon foot print: ";
        Carbonfp->Calculatecarbonfootprint();
        cout<<endl;
    }




    return 0;
}
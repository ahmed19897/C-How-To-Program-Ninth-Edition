#include<iostream>
#include<vector>
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

    
    vector <package *> Mypackages(2);
    int TotalShippingCost=0;//we need to initialize out of good practice. The current tool chaing doesn't initialize to 0

    Mypackages[0]=&Mypackage2;
    Mypackages[1]=&Mypackage3;

    for(package *Pack : Mypackages)
    {
        cout<<"Package type:"<<typeid(*Pack).name()<<'\n'<<"Reciever Address: "<<Pack->getZipreciever()<<'\n'
        <<"Sender Address: "<<Pack->getZipsender()<<'\n'<<"Cost: "<<
        Pack->calculateCost()<<endl<<endl;
        TotalShippingCost+=Pack->calculateCost();
    }
    cout<<'\n';
    cout<<"Total Shpping Cost For all packages is: "<<TotalShippingCost<<endl;

    return 0;
}
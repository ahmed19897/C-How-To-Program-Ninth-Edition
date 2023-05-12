#include <iostream>
#include <iomanip>
using namespace std;



int main()
{

    unsigned int Miles=0;
    unsigned int Gallons=0;
    double MPG=0;



    while(Miles!=-1)
    {
        cout<<"Please enter Millage (enter -1 to exit)"<<endl;
        cin>>Miles;
        if(Miles!=-1)
        {
            cout<<"please enter Gallons"<<endl;
            cin>>Gallons;
            MPG=static_cast<double>(Miles)/static_cast<double>(Gallons);
            cout<<setprecision(2)<<fixed;
            cout<<"Your Miles per gallon is:"<<MPG<<'\n'<<endl;
        }
        

    }


    return 0;
}
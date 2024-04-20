#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

inline double spherevolume(int radius);



int main()
{
   double radius=0.0;

    cout<<"Please enter the radius of a sphere: "<<endl;
    cin>>radius;

    cout<<"The volume of the sphere is:"<<4.0/3.0*M_PI*(pow(radius,3))<<endl;
    cout<<"from inline function the volume is:"<<spherevolume(radius)<<endl;


    return 0;
}

inline double spherevolume(int radius)
{
    return (4.0/3.0*3.14159*pow(radius,3));
}
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define pi 3.1415


inline double circleArea(const double raduis)
{
    return 2*pi*raduis;
}


int main()
{
    double radius=0;;

    cout<<"please enter the raduis";
    cin>>radius;
    cout<<circleArea(4.0);




    return 0;
}
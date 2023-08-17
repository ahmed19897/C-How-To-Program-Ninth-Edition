#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



int main()
{
    float x;

    x=fabs(7.5);
    cout<<x<<endl;
    x=floor(7.5);
    cout<<x<<endl;
    x=ceil(-6.4);
    cout<<x<<endl;
    x=ceil(-fabs(-8+floor(-5.5)));
    cout<<x<<endl;

    return 0;
}
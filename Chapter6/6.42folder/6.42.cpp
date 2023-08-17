#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double distance(double x1,double y1,double x2,double y2);




int main()
{


    cout<<"distance is:"<<distance(0,0,3,4);





    return 0;
}






double distance(double x1,double y1,double x2,double y2)
{
    double vertdis=0,horizdis=0;

    vertdis=y2-y1;
    horizdis=x2-x1;

    return sqrt(pow(vertdis,2)+pow(horizdis,2));
}
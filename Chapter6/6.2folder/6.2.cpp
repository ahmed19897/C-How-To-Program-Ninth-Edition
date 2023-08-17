#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int cube(int y);

int main()
{
    int x=0;
    for(x=0;x<=10;x++)
    {
        cout<<pow(x,3)<<endl;
    }
    cout<<endl;


    for(x=0;x<=10;x++)
    {
        cout<<cube(x)<<endl;
    }

    return 0;
}


int cube(int y)
{
    return y*y*y;
}
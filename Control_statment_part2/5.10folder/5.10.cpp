#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    double  Result=1.0;
    int Counter=0,i=0;

    cout<<setprecision(2)<<fixed;

    for(int j=1;j<=20;j++)
    {
        while(Counter<j)
        {
            Result*=(j-i);
            i++;
            Counter++;
        }
        cout<<"factorial of "<<j<<" is:"<<Result<<endl;
        Counter=0;
        i=0;
        Result=1.0;
    }

    return 0;
}
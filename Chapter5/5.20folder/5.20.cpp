#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;


int main()
{

    for(int i=1;i<=500;i++)
    {
        for(int j=1;j<=500;j++)
        {
            for(int k=1;k<=500;k++)
            {
                if((sqrt(pow(i,2)+pow(j,2)))==k)
                {
                    cout<<i<<' '<<j<<' '<<k<<endl;
                }
            }
        }
    }






    return 0;
}
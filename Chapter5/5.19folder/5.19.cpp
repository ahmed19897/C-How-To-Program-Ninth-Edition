#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;


int main()
{

int mathpi=4;
int flag=0;

for(int i=1;i<2000;i=i+2)
{

    if(flag==0)
    {

        mathpi-=4/i;
        flag=1;
    }
    else if(flag==1)
    {
        mathpi+=4/i;
        flag=0;
    }


}
cout<<mathpi<<endl;

    return 0;
}
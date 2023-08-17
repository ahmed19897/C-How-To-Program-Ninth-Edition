#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
using namespace std;



int main()
{
    const size_t arraySize=10;

    array<double,arraySize>myarray={0};

    myarray[9]=1.667;
    myarray[7]=3.333;

    cout<<setprecision(3)<<endl;

    //for(int i=0;i<myarray.size();i++)
    //{
    //    cout<<myarray[i]<<endl;
    //}

    for(double items:myarray)
    {
        cout<<items<<'\n';
    }

    return 0;
}
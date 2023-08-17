#include<iostream>
#include<iomanip>
#include<random>
#include<ctime>
#include<array>
using namespace std;

void somefunction(const array<int,10>&,size_t);

int main()
{
    array <int,10>a={1,2,3,4,5,6,7,8,9,10};



    somefunction(a,0);



    return 0;

}

void somefunction(const array<int,10>&b,size_t current)
{
    if (current<b.size())
    {

        somefunction(b,current+1);
        cout<<b[current]<<endl;

    }


}
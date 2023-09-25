#include "HugeInteger.h"
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <long ,40> myarray={20,40};
    HugeInteger hi(&myarray[0]);
    hi.input(0);
    hi.input(1);
    hi.output(0);
    hi.output(1);
    cout<<hi.add(0,1)<<endl;
    cout<<hi.sub(0,1)<<endl;
    return 1;
}
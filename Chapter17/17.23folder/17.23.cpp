#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int a=10;
    double b=10.0;//switch between 10.0 to 10.1 to alternate between catching int or double
    try
    {
        if(b>a)
        throw b;
        else
        throw a;
    }
    catch(int &)
    {
        cerr<<"int";
    }
    catch(double &)
    {
        cerr<<"double";
    }

    return 0;
}
#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        throw runtime_error("dw");
    }
    catch(runtime_error &)
    {
        throw;
    }


    return 0;
}
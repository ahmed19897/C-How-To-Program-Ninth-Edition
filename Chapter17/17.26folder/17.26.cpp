#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        //throw runtime_error("runtime");
        //throw logic_error("logic");
        throw bad_alloc();
    }
    catch(...)
    {

        cerr<<"Kak";
    }
    return 0;
}
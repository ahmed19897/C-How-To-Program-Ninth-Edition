#include <iostream>
#include <stdexcept>
using namespace std;


void test(void)
{
    try
    {
        throw runtime_error("caught inside function");
    }
    catch(runtime_error &refunction)
    {
        cerr<<refunction.what()<<endl;
    }
    throw runtime_error("uncaught inside function");
}
int main()
{
    try
    {
        test();
    }
    catch(runtime_error &re)
    {
        cerr<<re.what()<<endl;
    }
    return 0;
}
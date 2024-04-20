#include <iostream>
#include <stdexcept>
using namespace std;
class test
{
private:
    int testint;
public:
    test(int=1);
    ~test();
};
test::test(int testintt)
{
    try
    {
        throw runtime_error("from constructor");
    }
    catch(...)
    {
        cerr<<"from constructor"<<endl;//you can release a resource here
        throw;//removing the rethrow allow the program to call the destructor ...with the rethrow the program goes to the outer catch without calling the destructor
    }
}
test::~test()
{
    cerr<<"from destructor"<<endl;
}
int main()
{
    try
    {
        test t(0);
    }
    catch(...)
    {
        cerr<<"Kak";
    }
    return 0;
}
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
   throw runtime_error("from constructor");
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
        test tu (10);
    }
    catch(...)
    {
        cerr<<"Kak";
    }
    return 0;
}
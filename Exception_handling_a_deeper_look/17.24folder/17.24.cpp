#include <iostream>
#include <stdexcept>

class test
{
private:
    /* data */
public:
    test(/* args */);
    ~test();
};

test::test(/* args */)
{
}

test::~test()
{
}



using namespace std;

int main()
{
    try
    {
        test t;
        throw runtime_error("dw");
    }
    catch(runtime_error &)
    {
        cerr<<"Kak";
    }






    return 0;
}
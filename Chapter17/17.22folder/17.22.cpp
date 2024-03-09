#include <iostream>
#include <stdexcept>

using namespace std;


class exceptderived : public runtime_error
{
    public:
        exceptderived()
        :runtime_error("this is derived"){}
};

class exceptderived2 : public runtime_error
{
    public:
        exceptderived2()
        :runtime_error("this is derived 2"){}
};

int main()
{
//normal throw
    // try
    // {
    //     throw runtime_error("dw");
    // }
    // catch(runtime_error &)
    // {
    //     throw;
    // }

//derived throw 1
    // try
    // {
    //     throw exceptderived();
    // }
    // catch(runtime_error &)
    // {
    //     throw;
    // }

//derived throw 2
    try
    {
        throw exceptderived2();
    }
    catch(runtime_error &)
    {
        throw;
    }


    return 0;
}

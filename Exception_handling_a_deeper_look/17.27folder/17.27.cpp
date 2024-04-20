#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        throw bad_alloc();
    }
    catch(runtime_error &)
    {

        cerr<<"Kak";
    }
    // catch(runtime_error &)
    // {

    //     cerr<<"Kakkak";
    // }

    return 0;
}
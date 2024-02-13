#include <iomanip>
#include <iostream>

using namespace std;

int main()
{    
    for(int i=4;i<9;i++)
    {
        cout.precision(i);
        cout<<100.453627<<endl;
    }

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    for(int i=33;i<126;i++)
    {
        cout.put(i)<<endl;
        cout<<"dec:"<<dec<<i<<'\n'
        <<"Hex:"<<hex<<i<<'\n'
        <<"Oct:"<<oct<<i<<'\n'<<endl<<endl;
        


    }

    return 0;
}
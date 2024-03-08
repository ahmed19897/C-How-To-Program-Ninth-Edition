#include <array>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    array <int,10>Myarray;
    ostream_iterator<int> output(cout," ");

    for(int i=0;i<10;i++)
    {
        cout<<"Please enter your data:";
        cin>>Myarray[i];
    }

    sort(Myarray.begin(),Myarray.end());

    auto endlocation=unique(Myarray.begin(),Myarray.end());

    copy(Myarray.begin(),endlocation,output);

    return 0;
}
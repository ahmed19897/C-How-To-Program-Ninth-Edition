#include <array>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    array <int,20>Myarray;
    vector <int >Result;

    for(int i=0;i<20;i++)
    {
        cout<<"Please enter your data:";
        cin>>Myarray[i];
    }

    unique_copy(Myarray.cbegin(),Myarray.cend(),back_inserter(Result));


    for(int items:Result)
    {
        cout<<items<<endl;
    }
    



    return 0;
}
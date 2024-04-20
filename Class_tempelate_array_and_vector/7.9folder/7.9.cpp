#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    const auto rows=2,column=3;
    array<array<int,rows>,column>t={2,40,33,2,5,1};
    int sum=0;
    for(auto  &row:t)
    {
        for(auto  &column:row)
        {
            //column=0;
            cout<<column<<' ';
        }
    }

    sort(t[0].begin(),t[2].end(),greater<int>());
    sort(t[3].begin(),t[5].end(),greater<int>());

    cout<<'\n'<<endl; 

    for(auto  &row:t)
    {
        for(auto  &column:row)
        {
            cout<<column<<' ';
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    sum=t[0][1]+t[1][1]+t[2][1];

    cout<<"our column 2 sum is : "<<sum<<endl;

    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int,20>myArray={0};
    array<int,1>temp={0};

    cout<<"Please enter 20 INT numbers: "<<endl;

    for(auto &items:myArray)
    {
        cin>>temp[0];
        auto it=search(myArray.begin(),myArray.end(),temp.begin(),temp.end());

        if((*it>100 || *it<0) && (temp[0]>=10 && temp[0]<=100))
        {
            items=temp[0];  
        }
    }
    cout<<endl;
    sort(myArray.begin(),myArray.end());
    for(auto const item:myArray)
    {
        cout<<item<<endl;    
    }
    return 0;
}
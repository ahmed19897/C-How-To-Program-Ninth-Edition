#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>myArray(1);
    array<int,1>temp={1};

    std::cout<<"Please enter 20 INT numbers: "<<endl;

    while(temp[0]!=0)
    {
        std::cin>>temp[0];
        auto it=search(myArray.begin(),myArray.end(),temp.begin(),temp.end());

        if((*it>100 || *it<0) && (temp[0]>=10 && temp[0]<=100))
        {
            myArray.push_back(temp[0]); 
            std::cout<<myArray.size()<<endl;; 
        }
    }
    std::cout<<endl;
    sort(myArray.begin(),myArray.end());
    for(auto const item:myArray)
    {
        std::cout<<item<<endl;    
    }
    return 0;
}
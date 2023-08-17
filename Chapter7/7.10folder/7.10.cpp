#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
using namespace std;

int main()
{

array<int,20>sales={200,200,650,500,200,200,650,500,200,200,650,500,200,200,650,500,200,200,999,6520};
array<int,11>Category={};


    for(int &itemss:sales)
    {   
        if(itemss>999)
        {
          ++Category[(10)]; 
        }
        else
        ++Category[(itemss/100)];
    }

    for(auto const &items:Category)
    {
        cout<<items<<endl;
    }






    return 0;
}
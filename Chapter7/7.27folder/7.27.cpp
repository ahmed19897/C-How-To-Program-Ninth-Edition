#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
using namespace std;
int const moveNumber=1000;

//sieve of Eratosthenes to find prime nunbers

int main()
{
    array <int,moveNumber> block={0};


    for (int &item : block)
    {
        item=1;
    }

    for(int i=2;i<block.size();i++)
    {
        if(block[i]==1)
        {
            for(int j=i+1;j<block.size();j++)
            {
                if(j%i==0)
                {
                    block[j]=0;
                }
            }
        }
    }

    for(int i=0;i<block.size();i++)
    {
        if(block[i]==1)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}






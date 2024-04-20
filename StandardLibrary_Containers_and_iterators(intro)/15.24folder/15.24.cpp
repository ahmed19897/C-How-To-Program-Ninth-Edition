#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
#include <bitset>
using namespace std;
const int moveNumber=1000;
//sieve of Eratosthenes to find prime nunbers with bitsets

int main()
{
    bitset <moveNumber> block;
    int UserInput;

    block.flip();

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

    for(int i=2;i<block.size();i++)
    {
        if(block[i]==1)
        {
            cout<<i<<endl;
        }
    }

    cout<<"please enter a number to check if it's prime or not: ";
    cin>>UserInput;
    cout<<endl;
    
    if(block[UserInput]==1)
    {
        cout<<"it is a prime"<<endl;
    }
    else
    {
        cout<<"Not a prime"<<endl;
    }


    return 0;
}


//Display all values from 0 to 1023 using bitset class


// int main()
// {
    // bitset <10> Mybitset;

    // for(int i=1;i<=1024;i++)
    // {   
    //     cout<<Mybitset.to_ulong()<<endl;
    //     Mybitset.flip(0);
    //     if(i%2==0)
    //     {
    //         Mybitset.flip(1);
    //     }
    //     if(i%4==0)
    //     {
    //         Mybitset.flip(2);
    //     }
    //     if(i%8==0)
    //     {
    //         Mybitset.flip(3);
    //     }
    //     if(i%16==0)
    //     {
    //         Mybitset.flip(4);
    //     }
    //     if(i%32==0)
    //     {
    //         Mybitset.flip(5);
    //     }
    //     if(i%64==0)
    //     {
    //         Mybitset.flip(6);
    //     }
    //     if(i%128==0)
    //     {
    //         Mybitset.flip(7);
    //     }
    //     if(i%256==0)
    //     {
    //         Mybitset.flip(8);
    //     }
    //     if(i%512==0)
    //     {
    //         Mybitset.flip(9);
    //     }
        
    // }



//     return 0;
// }












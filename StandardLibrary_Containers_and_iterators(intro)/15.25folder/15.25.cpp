#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
#include <bitset>
using namespace std;
const int moveNumber=1000;
//sieve of Eratosthenes to find prime nunbers with bitsets with prime factorization

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
        
        //Display the prime factors of the non prime number
        while(UserInput!=1)
        {
            if(UserInput%2==0)
            {
                UserInput/=2;
                cout<<"2"<<' ';
            }
            else if(UserInput%3==0)
            {
                UserInput/=3;
                cout<<"3"<<' ';
            }
            else if(UserInput%5==0)
            {
                UserInput/=5;
                cout<<"5"<<' ';
            }
            else if(UserInput%7==0)
            {
                UserInput/=7;
                cout<<"7"<<' ';
            }
            else
            {
                cout<<"I don't know"<<endl;
            }
        }
    }

    return 0;
}
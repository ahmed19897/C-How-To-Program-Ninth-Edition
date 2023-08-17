#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
bool isPrime(int userInput);
int main()
{
    for(int j=2;j<=10000/2;j++)
    {
        cout<<"The current number to test is:"<<j<<'\n'<<isPrime(j)<<'\n'<<endl;
    }
    return 0;
}
bool isPrime(int userInput)
{
    int sum=0;
    for(int i=userInput;i>=1;i--)
    {
        if(userInput%i==0)
        {
            sum+=i;
            if(i==1)
            {
                cout<<i;
            }
            else
            cout<<i<<'+';
        }
    }
    cout<<endl;
    if(sum==(userInput+1))
    {
        return true;
    }
    else 
    return false;
}

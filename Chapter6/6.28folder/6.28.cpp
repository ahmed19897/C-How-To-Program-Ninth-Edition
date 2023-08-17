#include<iostream>
#include<iomanip>
using namespace std;
bool isPerfect(int userInput);
int main()
{
    for(int j=1;j<=30;j++)
    {

        cout<<"The current number to test is:"<<j<<'\n'<<isPerfect(j)<<'\n'<<endl;
    }
    return 0;
}
bool isPerfect(int userInput)
{
    int sum=0;
    for(int i=userInput-1;i>=1;i--)
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
    if(sum==userInput)
    {
        return true;
    }
    else 
    return false;
}
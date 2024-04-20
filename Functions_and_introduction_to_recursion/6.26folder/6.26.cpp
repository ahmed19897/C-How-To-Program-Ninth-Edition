#include<iostream>
#include<iomanip>
using namespace std;
int FToC(int userInput);
int CToF(int userInput);

int main()
{
    for(int i=1;i<=100;i++)
    {
        cout<<setw(10)<<left<<CToF(i);
        if(i%10==0)
        {
            cout<<endl;
        }
    }
    cout<<endl;
    for(int i=32;i<=212;i++)
    {
        cout<<setw(10)<<left<<FToC(i);
        if(i%10==0)
        {
            cout<<endl;
        }
    }
    
    
    return 0;
}

int FToC(int userInput)
{
    return  (userInput-32)*5/9;
}
int CToF(int userInput)
{
    return  (userInput*9/5)+32;
}

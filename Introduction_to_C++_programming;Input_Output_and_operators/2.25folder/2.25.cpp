#include <iostream>
using namespace std;

int main()
{
    int FirstNumber,SecondNumber;

    cout<<"please enter 2 number to check if the first is a multiple of the second: "<<endl;
    cin>>FirstNumber>>SecondNumber;

    if ((FirstNumber%SecondNumber)==0)
        cout<<FirstNumber<<" is a multiple of "<<SecondNumber<<endl;

    else 
        cout<<FirstNumber<<" is not a multiple of "<<SecondNumber<<endl;

    return 0;
}
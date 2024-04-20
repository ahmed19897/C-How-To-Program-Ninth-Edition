#include <iostream>

using namespace std;

int main()
{
    int FirstNumber,SecondNumber;

    cout<<"PLease enter 2 numbers: ";
    cin>>FirstNumber>>SecondNumber;

    if (FirstNumber>SecondNumber)
        cout<<FirstNumber<<" is larger\n";
    else if  (FirstNumber<SecondNumber)
        cout<<SecondNumber<<" is larger\n";
    else
        cout<<"Both Numbers are equal";

    return  0;
}
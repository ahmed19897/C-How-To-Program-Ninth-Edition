#include<iostream>
#include<iomanip>

using namespace std;

bool isEven(int firstNumber);

int main()
{
    int userInput;


    while(userInput!=-1)
    {
        cout<<"Please enter yourinput:"<<endl;
        cin>>userInput;

        cout<<'\n'<<isEven(userInput)<<'\n'<<endl;
    }
    return 0;
}

bool isEven(int firstNumber)
{
    return !(firstNumber%2);
}
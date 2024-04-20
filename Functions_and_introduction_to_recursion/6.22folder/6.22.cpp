#include<iostream>
#include<iomanip>

using namespace std;

void square(int firstNumber);

int main()
{
    int userInput;


    while(userInput!=-1)
    {
        cout<<"Please enter yourinput:"<<endl;
        cin>>userInput;

        square(userInput);
    }
    return 0;
}

void square(int firstNumber)
{
    for(int i=0;i<firstNumber;i++)
    {
        for(int j=0;j<firstNumber;j++)
        {
            cout<<"*";
        }
        cout<<'\n';
    }
}
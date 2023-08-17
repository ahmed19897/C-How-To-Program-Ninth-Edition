#include<iostream>
#include<iomanip>

using namespace std;

void square(int firstNumber,char fillCharacter);

int main()
{
    int userInput;
    char userInputChar;

    while(userInput!=-1)
    {
        cout<<"Please enter yourinput:"<<endl;
        cin>>userInput;

        cout<<"Please enter the char:"<<endl;
        cin>>userInputChar;

        square(userInput,userInputChar);
    }
    return 0;
}

void square(int firstNumber,char fillCharacter)
{
    for(int i=0;i<firstNumber;i++)
    {
        for(int j=0;j<firstNumber;j++)
        {
            cout<<fillCharacter;
        }
        cout<<'\n';
    }
}
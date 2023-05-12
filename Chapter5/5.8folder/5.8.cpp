#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
    int numberOfEntries=0;
    int userInput=0;
    int smallestNumber;

    cout<<"please enter the number of entries: "<<endl;
    cin>>numberOfEntries;
    
    cout<<"please enter the value: "<<endl;
    cin>>userInput;
    smallestNumber=userInput;

    for(int i=0;i<numberOfEntries;i++)
    {
        cout<<"please enter the value: "<<endl;
        cin>>userInput;
        if(userInput<smallestNumber)
        {
            smallestNumber=userInput;
        }
    }

    cout<<'\n'<<"The smalles number is:"<<smallestNumber<<endl;

    return 0;
}
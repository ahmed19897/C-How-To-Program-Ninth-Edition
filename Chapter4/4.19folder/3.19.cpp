#include <iostream>
using namespace std;


int main()
{
    int UsersCounted=0;
    int CurrentUserNumberInput=0;
    int LargestNumber=0;
    int SecondLargestNumber=0;

    while(UsersCounted<10)
    {
        cout<<"Enter your Sales amount in EGP:"<<endl;
        cin>>CurrentUserNumberInput;

        if(CurrentUserNumberInput>LargestNumber)
        {
            LargestNumber=CurrentUserNumberInput;
        }
        else if (CurrentUserNumberInput<LargestNumber && CurrentUserNumberInput>SecondLargestNumber)
        {

            SecondLargestNumber=CurrentUserNumberInput;
        }

        UsersCounted++;
    }
    
    cout<<"The Largest Number Is:"<<LargestNumber<<'\n'<<"The Second Largest Number Is:"<<SecondLargestNumber<<endl;

    return 0;
}
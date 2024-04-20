#include <iostream>
#include <iomanip>
using namespace std;


int main()
{


    int numberOfUserInputs;
    int sum=0;
    int currentUserInput;

    cout<<"Please enter the number of elements to sum: "<<endl;
    cin>>numberOfUserInputs;

    for(int i=0;i<numberOfUserInputs;i++)
    {
        cout<<'\n'<<"please enter the value to sum: "<<endl;
        cin>>currentUserInput;

        sum+=currentUserInput;

    }

    cout<<'\n'<<"The sum  is: "<<sum<<endl;

    return 0;


}
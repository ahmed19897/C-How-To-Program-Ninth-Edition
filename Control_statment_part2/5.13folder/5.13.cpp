#include<iostream>
#include<iomanip>
using namespace std;




int main()
{
    int userInput;

    cout<<"please enter a whole number between 1 and 30:"<<endl;
    cin>>userInput;

    if(userInput>=1 && userInput<=30)
    {
        for(int i=0;i<userInput;i++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    else
    cerr<<"invalid input"<<endl;








    return 0;
}
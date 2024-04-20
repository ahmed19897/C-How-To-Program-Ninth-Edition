#include <iostream>
using namespace std;

int main()
{
    int width=0,widthtemp=0;
    int lenght=0,lenghttemp=0;

    cout<<"please  enter your lenght: "<<endl;
    cin>>lenght;
    lenghttemp=lenght;

    cout<<"please  enter your width(no longer than 20):"<<endl;
    cin>>width;
    widthtemp=width;


    if (width>20)
    {
        cerr<<"invalid width value";
        width=1;
    }

    while(lenghttemp!=0)
    {

        while(widthtemp!=0)
        {

            if (widthtemp==width || widthtemp==1||lenghttemp==lenght||lenghttemp==1)
            cout<<"*";
            else
            cout<<" ";

            widthtemp--;
        } 
        cout<<'\n';

        widthtemp=width;
        lenghttemp--;

    }

    return 0;
}
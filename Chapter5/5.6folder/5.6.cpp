#include<iostream>
#include<iomanip>

using namespace std;




int main()
{

    int counter=0;
    int sum=0;
    int avg=0;
    int currentUserInput=0;


    

    for(counter;currentUserInput!=9999;counter++)
    {
        sum+=currentUserInput;
        cout<<'\n'<<"please enter the value to Avg: "<<endl;
        cin>>currentUserInput;

    }


    avg=sum/--counter;

    cout<<'\n'<<"The Avg  is: "<<avg<<endl;

    return 0;


}
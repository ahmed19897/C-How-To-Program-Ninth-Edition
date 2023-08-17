#include<iostream>
#include<iomanip>
using namespace std;


bool multiple(int firstMultiple,int secondMultiple);

int main()
{
    int userInput1,userInput2;



    while(userInput1!=-1)
    {
        cout<<"Enter the first number:"<<endl;
        cin>>userInput1;

        cout<<'\n'<<"Enter the second nummber:"<<endl;
        cin>>userInput2;

        cout<<'\n'<<multiple(userInput1,userInput2)<<'\n'<<endl;

    }




    return 0;
}

bool multiple(int firstMultiple,int secondMultiple)
 {

    return !(secondMultiple%firstMultiple);


 }
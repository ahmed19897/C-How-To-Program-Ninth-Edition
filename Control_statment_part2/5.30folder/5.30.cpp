#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int userAnswer;
    int counter=0;

    for(int i=1;i<=5;i++)
    {
        cout<<"Q:a1,a2,a3,a4"<<endl;
        cin>>userAnswer;
        if(userAnswer==1)
        {
            counter++;
        }

    }

    switch(counter)
    {
        case 1 :
            cout<<"what the hell !"<<endl;
        break;

        case 2:
            cout<<"meh !"<<endl;
        break;

        case 3:
            cout<<"alright"<<endl;
        break;
        
        case 4:
            cout<<"okaay"<<endl;
        break;

        case 5:
            cout<<"shesh"<<endl;
        break;
    }





    return 0;
}
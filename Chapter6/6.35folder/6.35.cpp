#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<random>
#include<ctime>
using namespace std;
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,1000);
int guessTheNumber(void);
int main()
{
    int userChoice=0,functionChoice=0,counter=0;
    functionChoice=guessTheNumber();
    while(userChoice!=functionChoice)
    {
        cout<<"Guess the number:";
        cin>>userChoice;

        if(userChoice>functionChoice)
        {
            cout<<"Too High"<<endl;
            counter++;
        }
        else if(userChoice<functionChoice)
        {
            cout<<"Too Low"<<endl;
            counter++;
        }
    }

    if(counter<10)
    {
        cout<<"You knew the trick!"<<endl;
    }
    else if( counter==10)
    {
        cout<<"ahaa!"<<endl;
    }
    else
        cout<<"You can do better"<<endl;


    cout<<"Excelllent"<<endl;
    return 0;
}
int guessTheNumber(void)
{
    return randomInt(engine);
}
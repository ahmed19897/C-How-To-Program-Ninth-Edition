#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<random>
#include<ctime>
using namespace std;
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,2);
int flip(void);
int main()
{
    int headsCounter=0,tailsCounter,result=0;
    ///srand(static_cast<unsigned int>(time(0)));
    
    

    for(int i=0;i<100;i++)
    {
        result=flip();
        if(result==2)
        {


            headsCounter++;
        }
        
        else if (result==1)
            tailsCounter++;

    }

    cout<<"Heads:"<<headsCounter<<endl;
    cout<<"Tails:"<<tailsCounter<<endl;


    return 0;
}
int flip(void)
{    
    //return (rand()%2)+1;
    return randomInt(engine);
}
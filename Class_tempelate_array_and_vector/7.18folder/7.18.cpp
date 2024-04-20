#include<iostream>
#include<iomanip>
#include<random>
#include<ctime>
#include<array>
using namespace std;
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,6);


enum status{CONTINUE,WON,LOST};
unsigned int rollDice(void);
status runAGame(array<int,21>&woncountfunction,array<int,21>&lostcountfunction);



int main()
{
    int bankBalance=1;
    int playerpraise=1;
    ::status gamestatus;
    array<int,21>wincount={0};
    array<int,21>losscount={0};

    while(bankBalance<1000)
    {  
            gamestatus=runAGame(wincount,losscount);
            bankBalance++;

    }
            cout<<"games won"<<setw(15)<<"games lost"<<endl;
            for(int i=1;i<wincount.size();i++)
            {
                cout<<wincount[i]<<setw(15)<<losscount[i]<<endl;
            }
    return 0;
}
unsigned int rollDice(void)
{
    unsigned int die1=randomInt(engine);
    unsigned int die2=randomInt(engine);
    unsigned int sum=die1+die2;
    return sum;
}


status runAGame(array<int,21>&woncountfunction,array<int,21>&lostcountfunction)
{
    int rollnumber=1;
    srand(static_cast<unsigned int>(time(0)));
    unsigned int myPoint=0;
    ::status  gamestatus=CONTINUE;
    unsigned int sumofDice=rollDice();

    switch(sumofDice)
    {
        case 7:
        case 11:
        gamestatus=WON;
        ++woncountfunction[1];
        break;

        case 2:
        case 3:
        case 12:
        gamestatus=LOST;
        ++lostcountfunction[1];
        break;

        default:
        gamestatus=CONTINUE;
        myPoint=sumofDice;
        break;
    }

    while(CONTINUE==gamestatus)
    {

        sumofDice=rollDice();
        if(sumofDice==myPoint)
        {
            gamestatus=WON;
            if(rollnumber>20)
            {
                ++woncountfunction[21];  
            }
            else
            ++woncountfunction[rollnumber];
        }
        else
            if(sumofDice==7)
            {
                gamestatus=LOST;
                if(rollnumber>20)
                {
                  ++lostcountfunction[21];  
                }
                else
                ++lostcountfunction[rollnumber];
            }
        rollnumber++;
    }
    cout<<endl;
    return gamestatus; 
}
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<random>
using namespace std;
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,1000);
enum status{CONTINUE,WON,LOST};
unsigned int rollDice(void);
status runAGame(void);






int main()
{
    int bankBalance=1000;
    int wager=0;
    int cont=1;
    int playerpraise=1;
    ::status gamestatus;
    


    while(cont!=-1 && bankBalance>0)
    {
        cout<<"Please enter a wager:";
        cin>>wager;
        while(bankBalance<wager)
        {
            cout<<"wager bigger than bank balance please enter a smaller wawger:";
            cin>>wager;
        }
        cout<<endl;
        if(bankBalance>0)
        {
            gamestatus=runAGame();
            if(WON==gamestatus)
            {
                bankBalance+=wager;
                cout<<"Player wins"<<endl;
                switch (playerpraise)
                {
                    case 1:
                        cout<<"great";
                        playerpraise++;
                    break;

                    case 2:
                        cout<<"bravo";
                        playerpraise++;
                    break;

                    case 3 :
                        cout<<"whaaaaaaat";
                        playerpraise=1;
                    break;
                }
                cout<<endl;
                cout<<"Your New Balance is :"<<bankBalance<<endl;
                cout<<"continue?"<<endl;
                cin>>cont;
            }
            else
            {
                bankBalance-=wager;
                cout<<"PLAYER LOSES"<<endl; 
                cout<<"Your New Balance is :"<<bankBalance<<endl;
                if(bankBalance<=0)
                {
                    cont=-1;
                }
                else
                {
                    cout<<"continue?"<<endl;
                    cin>>cont;
                }  
            }
        }
        else
            cout<<"sorry you're busted"<<endl;
    }
    if(bankBalance>1000)
    {
        cout<<"Great Job !!"<<endl;
    }
    else if (bankBalance<1000 && bankBalance>0)
        cout<<"sorry ...better luck next time";
    else
        cout<<"OH no ...you're broke";
    return 0;
}









unsigned int rollDice(void)
{
    unsigned int die1=1+randomInt(engine)%6;
    unsigned int die2=1+randomInt(engine)%6;
    unsigned int sum=die1+die2;



    cout<<"Player rolled  "<<die1<<'+'<<die2<<'='<<sum<<endl;
    return sum;
}

status runAGame(void)
{
    srand(static_cast<unsigned int>(time(0)));
    unsigned int myPoint=0;
    ::status  gamestatus=CONTINUE;
    unsigned int sumofDice=rollDice();



    switch(sumofDice)
    {
        case 7:
        case 11:
        gamestatus=WON;
        break;

        case 2:
        case 3:
        case 12:
        gamestatus=LOST;
        break;

        default:
        gamestatus=CONTINUE;
        myPoint=sumofDice;
        cout<<setw(10)<<"POINT is :"<<myPoint<<endl;
        break;
    }

    while(CONTINUE==gamestatus)
    {
        sumofDice=rollDice();
        if(sumofDice==myPoint)
        {
            gamestatus=WON;
        }
        else
            if(sumofDice=7)
            {
                gamestatus=LOST;
            }
    }
    cout<<endl;
    return gamestatus; 
}
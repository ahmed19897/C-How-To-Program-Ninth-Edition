#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<random>
using namespace std;
default_random_engine engine(static_cast <unsigned int> (time(0)));
uniform_int_distribution <unsigned int>randomInt(1,4);
int GenerateQuestion(void);
void CorrectMessage(int randomChoice);
void IncorrectMessage(int randomChoice);


int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int userInput=0;
    int userCont=0;
    int firstDigit=0;
    int secondDigit=0;
    int progResult=0;
    double trueAns=0;
    double falseAns=0;
    int progCounter=1;

    while(userCont!=-1 && progCounter<=10)
    { 
        firstDigit=GenerateQuestion();
        secondDigit=GenerateQuestion();


        cout<<"How Much is "<<firstDigit<<" x "<<secondDigit<<" ? ";
        cin>>userInput;
        cout<<endl;


        progResult=firstDigit*secondDigit;


        while(userInput!=progResult && progCounter<=9)
        {
            IncorrectMessage(randomInt(engine));
            falseAns++;
            progCounter++;
            cin>>userInput;

        }


        if(userInput==progResult)
        {
            trueAns++;
            CorrectMessage(randomInt(engine));
            cout<<"Continue?";
            cin>>userCont;
        }    


        progCounter++;


    }


    if(trueAns/10>=0.75)
    {
        cout<<"You're ready for the next level"<<endl;
    }
    else
    {
        cout<<"Please ask your teacher for help"<<endl;
    }
        



    return 0;
}






int GenerateQuestion(void)
{
    return ((rand()%9)+1);
}

void CorrectMessage(int randomChoice)
{
    switch(randomChoice)
    {
        case 1:
            cout<<"Very good!"<<endl;
        break;


        case 2:
            cout<<"Excellent"<<endl;
        break;


        case 3:
            cout<<"Nice Work"<<endl;
        break;


        case 4:
            cout<<"Keep up the good work"<<endl;
        break;

        default:
            cerr<<"out of index praise meesage index";
        break;

    }
}


void IncorrectMessage(int randomChoice)
{
    switch(randomChoice)
    {
        case 1:
            cout<<"No please try again"<<endl;
        break;


        case 2:
            cout<<"wrong try one more time"<<endl;
        break;


        case 3:
            cout<<"Don't give up!"<<endl;
        break;


        case 4:
            cout<<"No Keep trying"<<endl;
        break;

        default:
            cerr<<"out of index incorrect meesage index";
        break;

    }
}
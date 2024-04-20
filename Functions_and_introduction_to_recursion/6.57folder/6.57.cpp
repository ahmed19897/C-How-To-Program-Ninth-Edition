#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int GenerateQuestion(void);



int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int userInput=0;
    int userCont=0;
    int firstDigit=0;
    int secondDigit=0;
    int progResult=0;


    while(userCont!=-1)
    { 
        firstDigit=GenerateQuestion();
        secondDigit=GenerateQuestion();


        cout<<"How Much is "<<firstDigit<<" x "<<secondDigit<<" ? ";
        cin>>userInput;
        cout<<endl;


        progResult=firstDigit*secondDigit;


        while(userInput!=progResult)
        {
            cout<<"Try again ";
            cin>>userInput;

        }


        cout<<"Great Job !"<<endl;


        cout<<"Continue?";
        cin>>userCont;
    }

    return 0;
}






int GenerateQuestion(void)
{
    return ((rand()%9)+1);
}
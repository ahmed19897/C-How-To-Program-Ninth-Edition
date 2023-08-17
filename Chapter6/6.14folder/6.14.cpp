#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int roundToInt(double s32userInput);
double roundToTenths(double s32userInput);
double roundToHundredths(double s32userInput);
double roundTothouthandths(double s32userInput);


int main()
{
double s32_UserInput_Rounded;

double s32_UserInput=0;
    while(s32_UserInput!=-1.0)
    {
        s32_UserInput_Rounded=roundToInt(s32_UserInput);
        cout<<setw(50)<<"The rounded int  value is :"<<setw(10)<<s32_UserInput_Rounded<<endl;

        s32_UserInput_Rounded=roundToTenths(s32_UserInput);
        cout<<setw(50)<<"The rounded tenth  value is :"<<setw(10)<<s32_UserInput_Rounded<<endl;

        s32_UserInput_Rounded=roundToHundredths(s32_UserInput);
        cout<<setw(50)<<"The rounded Hundredths  value is :"<<setw(10)<<s32_UserInput_Rounded<<endl;

        s32_UserInput_Rounded=roundTothouthandths(s32_UserInput);
        cout<<setw(50)<<"The rounded thousandths  value is :"<<setw(10)<<s32_UserInput_Rounded<<endl;


        cout<<'\n'<<"Please enter the next number"<<endl;
        cin>>s32_UserInput;
    }

    return 0;
}

int roundToInt(double s32userInput)
{
    return floor(s32userInput+0.5);
}

double roundToTenths(double s32userInput)
{
    return floor(s32userInput*10+0.5)/10;
}

double roundToHundredths(double s32userInput)
{
    return floor(s32userInput*100+0.5)/100;
}

double roundTothouthandths(double s32userInput)
{
    return floor(s32userInput*1000+0.5)/1000;
}
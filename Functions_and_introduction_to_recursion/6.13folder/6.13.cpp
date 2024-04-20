#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



int main()
{
double s32_UserInput_Rounded;

double s32_UserInput=0;
    while(s32_UserInput!=-1.0)
    {
        s32_UserInput_Rounded=floor(s32_UserInput+0.5);
        cout<<"The rounded value is :"<<s32_UserInput_Rounded<<endl;



        cout<<"Please enter the next number"<<endl;
        cin>>s32_UserInput;
    }

    return 0;
}
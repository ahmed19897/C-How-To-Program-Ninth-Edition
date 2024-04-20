#include <iostream>
using namespace std;


int main()
{
    int User_Input{0},digitsCounter{0},firstDigit{0},secondDigit{0},thirdDigit{0},fourthDigit,User_InputTemp{0},firstThirdSwapTemp{0},secondFourthSwapTemp{0};

    cout<<"Please enter 4 Digits:"<<endl;
    cin>>User_Input;
    if(User_Input>=1000 && User_Input<=9999)
    {
        User_InputTemp=User_Input;
        /*seperating digits*/
        fourthDigit=User_Input%10;
        User_InputTemp/=10;
        thirdDigit=User_InputTemp%10;
        User_InputTemp/=10;
        secondDigit=User_InputTemp%10;
        User_InputTemp/=10;
        firstDigit=User_InputTemp%10;
        /*seperating digits*/
    }
    else
    {
        cerr<<"invalid enetered value ! please enter 4 digits only";
    }

    /*encryption*/
    firstDigit=(firstDigit+7)%10;
    secondDigit=(secondDigit+7)%10;
    thirdDigit=(thirdDigit+7)%10;
    fourthDigit=(fourthDigit+7)%10;

    firstThirdSwapTemp=thirdDigit;
    thirdDigit=firstDigit;
    firstDigit=firstThirdSwapTemp;

    secondFourthSwapTemp=secondDigit;
    secondDigit=fourthDigit;
    fourthDigit=secondFourthSwapTemp;
    /*encryption*/


    cout<<'\n'<<firstDigit<<"     "<<secondDigit<<"      "<<thirdDigit<<"      "<<fourthDigit<<endl;



    /*swap*/
    firstThirdSwapTemp=firstDigit;
    firstDigit=thirdDigit;
    thirdDigit=firstThirdSwapTemp;

    secondFourthSwapTemp=secondDigit;
    secondDigit=fourthDigit;
    fourthDigit=secondFourthSwapTemp;
    /*swap*/

    /*checking if digit is in the right value to add 10 to it or not then add the 7*/
    if(firstDigit<=6 && firstDigit>=1)
    {

        firstDigit+=10;

    }
    firstDigit-=7;


    if(secondDigit<=6 && secondDigit>=1)
    {

        secondDigit+=10;

    }
    secondDigit-=7;


    if(thirdDigit<=6 && thirdDigit>=1)
    {

        thirdDigit+=10;

    }
    thirdDigit-=7;

    if(fourthDigit<=6 && fourthDigit>=1)
    {

        fourthDigit+=10;

    }
    fourthDigit-=7;
    /*checking if digit is in the right value to add 10 to it or not then add the 7*/


    /*preparing the digits to be added back togeather*/
    firstDigit*=1000;
    secondDigit*=100;
    thirdDigit*=10;
    fourthDigit*=1;
    /*preparing the digits to be added back togeather*/


    User_InputTemp=firstDigit+secondDigit+thirdDigit+fourthDigit;

    if(User_InputTemp==User_Input)
    {
        cout<<'\n'<<"Decrypted !";
    }
    cout<<'\n'<<User_InputTemp<<endl;



    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int UserInput,FirstDigit,SecondDigit,ThirdDigit,FourthDigit,FifthDigit;

    cout<<"please enter a 5 digit integer\n"<<endl;

    cin>>UserInput;    


    FirstDigit=UserInput/10000;
    SecondDigit=(UserInput/1000)%(FirstDigit*10);
    ThirdDigit=(UserInput/100)%((UserInput/1000)*10);
    FourthDigit=(UserInput/10)%((UserInput/100)*10);
    FifthDigit=(UserInput)%((UserInput/10)*10);


    cout<<FirstDigit<<" "<<SecondDigit<<" "<<ThirdDigit<<" "<<FourthDigit<<" "<<FifthDigit;


    return 0;
}
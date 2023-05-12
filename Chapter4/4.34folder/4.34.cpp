#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    int UserInput,Result=1,i=0,Counter=0,UserNumerator=0,ResultNumerator=1;
    double e=0.0,ResultB=0.0;

    cout<<"please enter the number you want to calculate the factorial of :"<<endl;
    cin>>UserInput;
    cout<<"please enter Numerator: "<<endl;
    cin>>UserNumerator;
    if(UserInput<0)
    {  
    //preventing us from continuing if the user input is -ve 
       Counter=0; 
    }
    while(UserInput!=0)
    {

        while(Counter<UserInput)
        {
            Result*=(UserInput-i);
            i++;


            Counter++;
        }

        for(int i=0;i<UserInput;i++)
        {
            ResultNumerator*=UserNumerator;
        }

        ResultB +=ResultNumerator/static_cast<double>(Result);


        UserInput--;
        Counter=0;
        i=0;
        Result=1;
        ResultNumerator=1;
    }
    
    e=ResultB+1.0;

    cout<<setprecision(2)<<fixed;
    cout<<"The result is:"<<e<<endl;

    return 0;
}
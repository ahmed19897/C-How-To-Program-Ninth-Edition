#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int UserInput;
    int DecimalNumber;
    int i=0,Rem=0;

    cout<<"please enter a 5 digit integer\n"<<endl; 
    cin>>UserInput;

    while(UserInput!=0)
    {
        

        Rem=UserInput%10;
        UserInput=UserInput/10;
        DecimalNumber+=Rem*pow(2,i);
        ++i;


    }

    cout<<"The Decimel equivelent is: "<<DecimalNumber<<endl;


    return 0;
}
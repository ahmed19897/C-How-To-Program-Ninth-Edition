
#include<iostream>
using namespace std;

int main()
{
    int FirstNumber,SecondNumber,ThirdNumber,TotalProduct,TotalSum,TotalAvg;

    cout<<"please enter 3 numbers to be evaluated: ";

    cin>>FirstNumber>>SecondNumber>>ThirdNumber;

    TotalProduct=FirstNumber*SecondNumber*ThirdNumber;
    TotalSum=FirstNumber+SecondNumber+ThirdNumber;
    TotalAvg=(FirstNumber+SecondNumber+ThirdNumber)/3;

    cout<<"your total product is : "<<TotalProduct<<'\n'<<"your total sum is : "<<TotalSum<<'\n'<<"your total Average is: "<<TotalAvg<<'\n';


    if (FirstNumber>SecondNumber && FirstNumber>ThirdNumber) 
        cout<<FirstNumber<<" is larger\n";

    else if  (SecondNumber>FirstNumber && SecondNumber>ThirdNumber)
        cout<<SecondNumber<<" is larger\n";
        
    else if  (ThirdNumber>FirstNumber && ThirdNumber>SecondNumber)
        cout<<ThirdNumber<<" is larger\n";
    else
        cout<<"all Numbers are equal";


    
}
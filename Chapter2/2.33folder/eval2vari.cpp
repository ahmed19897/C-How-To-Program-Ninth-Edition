#include<iostream>

using namespace std;
int main()
{
    int FirstNumber,SecondNumber,TotalProduct,TotalSum,TotalCotient;

    cout<<"please enter 2 numbers to be evaluated: ";

    cin>>FirstNumber>>SecondNumber;

    TotalProduct=FirstNumber*SecondNumber;
    TotalSum=FirstNumber+SecondNumber;
    TotalCotient=FirstNumber%SecondNumber;

    cout<<"your total product is : "<<TotalProduct<<'\n'<<"your total sum is : "<<TotalSum<<'\n'<<"your total reminder is: "<<TotalCotient<<'\n'<<endl;


    
}
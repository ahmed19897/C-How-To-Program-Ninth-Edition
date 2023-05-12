#include<iostream>
using namespace std;

int main()
{
    int FirstNumber,SecondNumber,ThirdNumber,FourthNumber,FifthNumber;

    cout<<"Please enter 5 numbers: ";
    cin>>FirstNumber>>SecondNumber>>ThirdNumber>>FourthNumber>>FifthNumber;

    if(FirstNumber>SecondNumber && FirstNumber>ThirdNumber && FirstNumber> FourthNumber&& FirstNumber> FifthNumber)
    {
        cout<<"The Largest Number is: "<<FirstNumber;
    }
    else if (SecondNumber>FirstNumber && SecondNumber>ThirdNumber && SecondNumber> FourthNumber&& SecondNumber> FifthNumber)
    {
        cout<<"The Largest Number is: "<<SecondNumber;
    }
    else if (ThirdNumber>FirstNumber && ThirdNumber>SecondNumber && ThirdNumber> FourthNumber&& ThirdNumber> FifthNumber)
    {
        cout<<"The Largest Number is: "<<ThirdNumber;
    }
    else if (FourthNumber>FirstNumber && FourthNumber>SecondNumber && FourthNumber> ThirdNumber&& FourthNumber> FifthNumber)
    {
        cout<<"The Largest Number is: "<<FourthNumber;
    }
    else if (FifthNumber>FirstNumber && FifthNumber>SecondNumber && FifthNumber> ThirdNumber && FifthNumber> FourthNumber)
    {
         cout<<"The Largest Number is: "<<FifthNumber;  
    }
    else
        cout<<"All Numbers are equal";

    return 0;

}


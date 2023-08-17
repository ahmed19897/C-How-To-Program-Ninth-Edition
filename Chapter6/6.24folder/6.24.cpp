#include<iostream>
#include<iomanip>
using namespace std;
int findTheInt(int firstInt,int secondInt);
int findTheRem(int firstInt,int secondInt);
void printEachDigit(int firstInt);

int main()
{
    int userInput1;
    while(userInput1!=-1 )
    {
        cout<<setw(10)<<"Please enter the number:";
        cin>>userInput1;
        printEachDigit(userInput1);
    }
    return 0;
}

int findTheInt(int firstInt,int secondInt)
{
    return firstInt/secondInt;
}

int findTheRem(int firstInt,int secondInt)
{
    return firstInt%secondInt;
}

void printEachDigit(int firstInt)
{
    int rev=0;


    while(firstInt>0)
    {
        rev=rev*10+findTheRem(firstInt,10);
        firstInt=findTheInt(firstInt,10);
    }

    while(rev>0)
    {
        cout<<setw(10)<<right<<findTheRem(rev,10);
        rev=findTheInt(rev,10);

    }
    cout<<endl; 
}
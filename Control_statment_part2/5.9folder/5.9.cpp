#include<iostream>
#include<iomanip>

using namespace std;


int main()
{

int oddProduct=1;


for(int i=1;i<=15;i++)
{
    if(i%2!=0)
    {
        oddProduct*=i;
    }
}

cout<<"The result is: "<<oddProduct<<endl;


    return 0;
}


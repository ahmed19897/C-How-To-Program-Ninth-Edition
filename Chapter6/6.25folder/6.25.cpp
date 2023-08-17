#include<iostream>
#include<iomanip>
using namespace std;
int numberOfSeconds(int Hours,int Mins, int Secs);

int main()
{
    cout<<"The number of Seconds till last time it struck 12 is :"<<numberOfSeconds(12,00,00)<<endl;

    return 0;
}

int numberOfSeconds(int Hours,int Mins, int Secs)
{
return (Secs+(Mins*60)+(Hours*60*60));
}
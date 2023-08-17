#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int tripleByValue(int counter);
void tripleByRef(int &counter);


int main()
{
int counter=2;

cout<<"from function:"<<tripleByValue(counter)<<endl;
cout<<"from main"<<counter<<endl;

cout<<endl;


tripleByRef(counter);
cout<<"from main"<<counter<<endl;

cout<<endl;

    return 0;
}

int tripleByValue(int counter)
{
return counter*counter*counter;
}
void tripleByRef(int &counter)
{
 counter=counter*counter*counter;
}
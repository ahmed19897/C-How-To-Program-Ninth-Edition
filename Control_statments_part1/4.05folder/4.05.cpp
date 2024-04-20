#include <iostream>
using namespace std;

//Control Statement Part 1
int main()
{
    int Numbers=0;
    int Sum=0;
    int Counter=0;


    while(Counter<10)
    {
        cout<<"Please enter the wanted number to  sum:"<<endl;
        cin>>Numbers;
        Sum+=Numbers;
        Counter++;
    }
    
    cout<<"the sum is:"<<Sum<<endl;

    return 0;
}
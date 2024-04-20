#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <vector>
#include <algorithm>
#include<random>
using namespace std;


default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,6);

int flip(void);
int main()
{
    int result1=0,result2=0,i=0;
    array<int,13>diceFrequence={0};


    for(i=0;i<=36000;i++)
    {
        result1=flip();
        result2=flip();
        ++diceFrequence[result1+result2];
    }
    i=0;
    for(int items:diceFrequence)
    {
        cout<<setw(5)<<i++<<"- "<<setw(5)<<items<<endl;
    }


    return 0;
}
int flip(void)
{    
    return randomInt(engine);
}
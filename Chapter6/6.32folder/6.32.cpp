#include <iostream>
#include<iomanip>
using namespace std;
int qualityPoints(int pointsAverage);
int main() 
{
    cout<<qualityPoints(88)<<endl;





    return 0;
}

int qualityPoints(int pointsAverage)
{
    if(pointsAverage>=90 && pointsAverage<=100)
    {
        return 4;
    }

    else if(pointsAverage>=80 && pointsAverage<=89)
    {
        return 3;
    }

    else if(pointsAverage>=70 && pointsAverage<=79)
    {
        return 2;
    }

    else if(pointsAverage>=60 && pointsAverage<=69)
    {
        return 1;
    }

    else
    return 0;

}
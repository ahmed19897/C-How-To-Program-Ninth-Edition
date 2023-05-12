#include <iostream>
using namespace std;

int main()
{
    int UserWeightInKilogram,height,BMI;

    cout<<"please enter your weight and height: ";
    cin>>UserWeightInKilogram>>height;

    BMI=UserWeightInKilogram/(height*height);

    cout<<"\n your BMI is: "<<BMI<<'\n'<<"BMI VALUES\nUnderweight: less than 18.5\nNormal:      betweeen 18.5 and 24.9\nOverweight:    between 25 and 29.9\nObese:     30 or greater";







    return 0;
}
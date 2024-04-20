#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
/*    
    array<char,27>myCharArray={'a','b','c','d','e','f','g','h','i','j','k','l','m','n'};
    cout<<myCharArray[6]<<endl;
*/

/*
    array<float,10>grades={0};
    cout<<"Please enter a floating point value: "<<endl;
    cin>>grades[4];
    cout<<"the value in the 4th element is: "<<grades[4]<<endl;
*/

/*
    array<float,100>temp={1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};
    float sum=0.0;
    for(float &item : temp)
    {
        sum+=item;
    }
    cout<<"your sum is "<<sum<<endl;
*/
    array<double,34>b={0};
    array<double,11>a={2,5,1,3,6,9,6,7,8,5,1};

    //assign array a values to array b first portion
    for(int i=0;i<a.size();i++)
    {
        b[i]=a[i];
    }
    //assign array a values to array b first portion 


    //sort descendingly and print the largest number
    sort(b.begin(),b.end(),greater<double>());    //
    cout<<*b.begin();                             //
    //sort descendingly and print the largest number


    return 0;
}
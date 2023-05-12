#include<iostream>
using namespace std;

int main()
{
    int Radius;

    cout<<"please enter the radius of the circle: ";

    cin>>Radius;

    cout<<"Circle Diameter: "<<2*Radius<<'\n'<<"Circle Area is: "<<3.1415*(Radius*Radius)<<'\n'<<"Circle Circumference is: "<<2*3.1415*Radius<<'\n'; 
}
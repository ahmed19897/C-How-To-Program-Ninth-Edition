#include<iostream>
#include<iomanip>
using namespace std;

double findMin(double userInput1,double userInput2,double userInput3);


int main()
{

    cout<<findMin(12.3,2.6,1.6)<<endl;


    return 0;

}
double findMin(double userInput1,double userInput2,double userInput3)
{
    if(userInput1<userInput2 && (userInput1<userInput3))
    {
      
        return userInput1;
    
    
    }

    if((userInput2<userInput1) && (userInput2<userInput3 ))
    {       
        return userInput2;
    }

    if((userInput3<userInput1) && (userInput3<userInput2 ))
    {       
        return userInput3;
    }
   

}
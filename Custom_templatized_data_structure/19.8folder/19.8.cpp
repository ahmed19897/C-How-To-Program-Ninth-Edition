//summing and averaging elements in a list
#include <iostream>
#include <list>
#include <algorithm>
#include<random>
#include <array>


using namespace std;
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned  int> randomInt(1,100);


int main()
{   
    array <unsigned int,100>myarray={0};
    list <unsigned int>l1;

//take a 100 random int
    for(int i=0;i<=100;i++)
    {
        myarray[i]=randomInt(engine);;
    }
  

//sort the 100  random ints inside the array
    sort(myarray.begin(),myarray.end());


//place the ordered 100 values inside the list
    for(int j=0;j<=100;j++)
    {
        l1.push_back(myarray[j]);
    } 

    
//calculate the sum of the total elements in the list and display it to the user
    cout<<( accumulate(l1.cbegin(),l1.cend(),0) )<<endl;

    return 0;
}
#include <iostream>
#include "DoubleSubscriptedArray.h" 
using namespace std;



int main(void)
{
    DoubleSubscriptedArray MyDoubleArray(3,2);
    DoubleSubscriptedArray MyDoubleArray2(2,2);
    

    // cout<<MyDoubleArray(1,0)<<endl;

    // cout<<endl;
    cin>>MyDoubleArray;
    
    // cout<<MyDoubleArray(1,0)<<endl;//this calles the overloaded operator () only andd not the overloaded <<
    // cout<<endl;
    // cout<<MyDoubleArray(0,1)<<endl;


    // cout<<MyDoubleArray<<endl;//this calles the overloaded overator << 

    cout<<endl;
    MyDoubleArray2=MyDoubleArray;//this will force the MyDoubleArray2 to be the same size as MyDoubleArray
    cout<<MyDoubleArray2<<endl;





    return  0;
}
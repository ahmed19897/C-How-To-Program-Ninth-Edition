#include "IntegerSet.h"
#include <iostream>
#include <array>

using namespace std;


int main()
{


    IntegerSet is1;
    vector<bool>test;
    vector<bool>test2;
    bool x;


    /*is1.DisplaySet();//is1 vector should be 0s
  

    is1.getSet(test);//test should be 0s
    is1.SetIntegerSet();//is1 vector should be 1s
    is1.getSet(test2);//test2 should be 1s
    is1.ResetIntegerSet();//is1 vector should be 0s
    is1.unionOfSets(test,test2);//is1 vector data member shoudl be set to 1s



    is1.DisplaySet();//is1 vector data member shoudl be set to 1s


    is1.DeleteElement(1);//Reset the first element in the vector data memeber to 0


    is1.DisplaySet();//is1 vector 1st element data member shoudl be set to 0s and the rest is 1s
 
    cout<<"two sets are :"<<is1.isEqualSet(test2,test)<<endl;*/


    array<bool,10>barr={true};
    
    for(auto &item:barr)
    {
        item=true;
    }
    IntegerSet is2(&barr[0],10);
     is2.DisplaySet();

    return 1;

}
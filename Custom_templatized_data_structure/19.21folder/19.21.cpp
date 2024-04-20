//search the tree recursively
#include <iostream>
#include "CustomList.h"
#include <iterator>



int main()
{
    CustomList<int> mylist;
    list<int>::const_iterator founditerator;

    mylist.llist.push_back(5);
    mylist.llist.push_back(6);
    mylist.llist.push_back(7);
    mylist.llist.push_back(8);
    
    mylist.printlistBackward(mylist.llist.cend());
    mylist.printlistBackward(mylist.llist.cend());

    // founditerator=mylist.searchList(7,mylist.llist.cend());
    // cout<<*founditerator<<endl;
    
   
    return 0;
}
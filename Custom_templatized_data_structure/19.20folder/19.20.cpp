//print the tree backward
#include <iostream>
#include "CustomList.h"



int main()
{
    CustomList<int> mylist;

    mylist.llist.push_back(5);
    mylist.llist.push_back(6);
    mylist.llist.push_back(7);
    mylist.llist.push_back(8);
    
    mylist.printlistBackward(mylist.llist.cend());

    mylist.printlistBackward(mylist.llist.cend());
    return 0;
}
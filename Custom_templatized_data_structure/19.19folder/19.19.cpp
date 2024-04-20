//determine the depth of the tree recursively
#include <iostream>
#include <iomanip>
#include "Tree.h"
using namespace std;

int main()
{
    Tree<int> intTree;
    cout<<"Enter 10 int values:\n";
    for(int i=0;i<10;i++)
    {
        int intValue=0;
        cin>>intValue;
        intTree.InsertNode(intValue);
    }
    int x=intTree.WhatIsTheDepthOfTree();
    cout<<endl;
    cout<<x<<endl;
    return 0;
}


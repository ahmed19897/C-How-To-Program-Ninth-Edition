//custom temeplatized tree data structure
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

    cout<<"\nPreorder Traversal\n";
    intTree.preorderTraversal();

    cout<<"\nInorder Traversal\n";
    intTree.inorderTraversal();

    cout<<"\nPostorder Traversal\n";
    intTree.postorderTraversal();


    cout<<fixed<<setprecision(1)<<"\n\nEnter 10 double values:\n";

    Tree<double> doubleTree;

    for(int i=0;i<10;i++)
    {
        double doubleValue=0;
        cin>>doubleValue;
        doubleTree.InsertNode(doubleValue);
    }

    cout<<"\nPreorder Traversal\n";
    doubleTree.preorderTraversal();

    cout<<"\nInorder Traversal\n";
    doubleTree.inorderTraversal();

    cout<<"\nPostorder Traversal\n";
    doubleTree.postorderTraversal();



    return 0;
}
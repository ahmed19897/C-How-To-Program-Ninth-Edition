//delete a node in the tree
#include <iostream>
#include <iomanip>
#include "Tree.h"
using namespace std;
int main()
{
    Tree<int> intTree;
    int valuetodelete=0;

//testing first tree (2 level deep)
    // intTree.InsertNode(27);

    // intTree.InsertNode(20);
    // intTree.InsertNode(42);

    // intTree.InsertNode(25);
    // intTree.InsertNode(48);
    // intTree.InsertNode(33); 

//testing second tree (one level deep)
    intTree.InsertNode(27);

    intTree.InsertNode(13);
    intTree.InsertNode(42);

    intTree.InsertNode(48);
    intTree.InsertNode(33);
    //intTree.InsertNode(32);

    cout<<"enter a value to delete:"<<endl;
    cin>>valuetodelete;
    intTree.deleteNode(valuetodelete);



    cout<<"\nPreorder Traversal\n";
    intTree.preorderTraversal();
    cout<<"\nInorder Traversal\n";
    intTree.inorderTraversal();
    cout<<"\nPostorder Traversal\n";
    intTree.postorderTraversal();
    return 0;
}
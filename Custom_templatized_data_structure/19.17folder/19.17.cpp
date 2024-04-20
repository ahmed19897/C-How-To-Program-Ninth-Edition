//create a tree of strings from user sentence and print their traversal orderes
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Tree.h"
using namespace std;
int main() 
{
    string init_string ;       
    // vector to store returned words
    vector <string> ret_words(1);
    string buf;
    Tree<string> intTree;

    cout << "Insert your string:";
    getline(cin,init_string);
    // Creating stringstream object
    stringstream ss(init_string); 
    //word extraction from a sentence
    while (ss >> buf) 
    {
        ret_words.push_back(buf);
    }

    for(int i=0;i<ret_words.size();i++)
    {
        intTree.InsertNode(ret_words[i]);
    }
    cout<<"\nPreorder Traversal\n";
    intTree.preorderTraversal();
    cout<<"\nInorder Traversal\n";
    intTree.inorderTraversal();
    cout<<"\nPostorder Traversal\n";
    intTree.postorderTraversal();
    return 0;
}
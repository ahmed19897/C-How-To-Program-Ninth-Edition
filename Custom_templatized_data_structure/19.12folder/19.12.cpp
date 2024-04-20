//infix to postfix conversion
#include <iostream>
#include <string>
#include <iterator>
#include <map>
#include "Stacks.h"


using namespace std;

bool StackOperatorHigherInPrecedednce( string &st,Stacks<char> &stack,multimap<char,int,less<int>> &map,int i);
bool IsOperator(string st,int i);



int main()
{
    Stacks <char> charstack;
    char top;
    string infix;
    string postfix;
    int i=0;
//declare a multimap fpr operator preceding key and value
    multimap<char,int,less<int>> mymap;


//create a preceding table for all operators allowed
    mymap.insert(make_pair('+',1));
    mymap.insert(make_pair('-',1));
    mymap.insert(make_pair('*',5));
    mymap.insert(make_pair('/',5));
    mymap.insert(make_pair('%',5));
    mymap.insert(make_pair('^',1));

    cout<<"please enter the expression to evaluate:";
    cin>>infix;

    charstack.push('(');
    infix.push_back(')');



    while(!(charstack.isStackEmpty()))
    {
        if(infix[i]>='0' && infix[i]<='9')//
        {
            postfix.push_back(infix[i]);
        }
        else if(infix[i]=='(')
        {
            charstack.push('(');
        }
        else if(IsOperator(infix,i))
        {
            while( StackOperatorHigherInPrecedednce(infix,charstack,mymap,i)   )
            {
                top=charstack.Top();
                charstack.pop(top);
                //insert all the operators with less than or equal preceding 
                //to the current character in in the infix to postfix
                postfix.push_back (top);
            }
            charstack.push(infix[i]);//new higher opertor pushed from user to the stack
            
        }
        else if(infix[i]==')')
        {
            while(charstack.Top()!='(')
            {
                top=charstack.Top();
                charstack.pop(top);
                postfix.push_back (top);
            }
            top=charstack.Top();
            charstack.pop(top);
        }
        i++;
    }
    cout<<endl;
    cout<<postfix<<endl;
    cout<<endl;

    return 0;
}

bool StackOperatorHigherInPrecedednce( string &st,Stacks<char> &stack,multimap<char,int,less<int>> &map,int i)
{
    multimap<char,int>::const_iterator findresult;
    multimap<char,int>::const_iterator findresult2;


    findresult=map.find(st[i]); //user operator
    char top=stack.Top();
    findresult2=map.find(top);//stack operator

    return (findresult2->second>=findresult->second);//return true if stack operator has higher preceding than user

}

bool IsOperator(string st,int i)
{
    return (st[i]=='+' || st[i]=='-' ||st[i]=='*' || st[i]=='/' || st[i]=='^' || st[i]=='%');
}
//postfix evaluation
#include <iostream>
#include <string>
#include <iterator>
#include <map>
#include "Stacks.h"

using namespace std;

    struct toptwo
    {
        int x;
        int y;
    };

int ConvertToInt(string,int);
bool Pop2TopElementsFromStack(Stacks<int>&,toptwo&);
bool Calculate(toptwo ,char,Stacks<int> &);

int main()
{
    Stacks <int> intstack;
    int top;
    string postfix;
    int i=0;
    toptwo mytoptwo;
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
     cin>>postfix;

    for(int i=0;i<postfix.length();i++)
    {
        if(postfix.at(i)>='0' && postfix.at(i)<='9')
        {
            intstack.push(ConvertToInt(postfix,i));//convert the character to string then push it
        }
        else
        {
            Pop2TopElementsFromStack(intstack,mytoptwo);
            Calculate(mytoptwo,postfix.at(i),intstack);

        }
    }
    cout<<endl;
    cout<<"Total value is "<<intstack.Top()<<endl;
    cout<<endl;
    return 0;
}
int ConvertToInt(string st,int i)
{
    return st.at(i)-static_cast<int>('0');
}

bool Pop2TopElementsFromStack(Stacks<int> &stack,toptwo &tw)
{
  
    
    tw.y=stack.Top();
    stack.pop(tw.y);
    tw.x=stack.Top();
    stack.pop(tw.x);
    return 0;
}

bool Calculate(toptwo tw,char op,Stacks<int> &st)
{
    switch (op)
    {
    case '+':
        st.push(tw.x+tw.y);
    break;

    case '-':
        st.push(tw.x-tw.y);
    break;

    case '*':
        st.push(tw.x*tw.y);
    break;

    case '/':
        st.push(tw.x/tw.y);
    break;

    case '%':
        st.push(tw.x%tw.y);
    break;

    case '^':
        st.push(tw.x^tw.y);
    break;
    
    default:
        cerr<<"illegal operator"<<endl;
    break;
    }
    return 0;
}
//palindrome while ignoring capaitalizaiton
#include <iostream>
#include <cstring>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string mystring;
    stack <char> mystack;

    getline(cin,mystring);

    //remove a character from a string
    //this way remove removes the character and copy all the letters after that backward and then remove removes the last characacter which will be a duplicate to the previous one n and n-1
    mystring.erase(std::remove(mystring.begin(), mystring.end(), ' '), mystring.end());

    for(int i =0;i<mystring.size();i++)
    {
        mystring[i]=toupper(mystring[i]);
        mystack.push(mystring[i]);
    }

    for(int i=0;i<mystring.size();i++)
    {
        if(mystring[i]==mystack.top())
        {
            mystack.pop();
            if(i=mystring.size()-1)
            {
                cout<<"Palindrome"<<endl;
            }
        }
        else
        {
            cout<<"NOT palindrome"<<endl;
            i=mystring.size();
        }

    }


    return 0;
}
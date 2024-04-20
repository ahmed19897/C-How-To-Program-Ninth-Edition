//printing a sentence in reverse order order using stack
#include <iostream>
#include <stack>
#include <algorithm>
#include <random>
#include <array>
#include <string>


using namespace std;


int main()
{
    stack <char>l1;
    string mystring2;

    cout<<"please enter a string: ";
    //better way to use getline than previous ,usin cin will read the input till the first " " then ignore the rest
    getline(cin,mystring2);
    

    for(int i=0;i<mystring2.size();i++)
    {
        l1.push(mystring2[i]);
    }

    for(int i=0;i<mystring2.size();i++)
    {
        cout<<l1.top();
        l1.pop();
    }


    return 0;
}
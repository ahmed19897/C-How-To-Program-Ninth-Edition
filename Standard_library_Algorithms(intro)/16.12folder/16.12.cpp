#include <algorithm>
#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

int main()
{
    string Mystring="radar";
    string Myreversedstring;

    reverse_copy(Mystring.begin(),Mystring.end(),back_inserter(Myreversedstring));
    auto mismatchresult=mismatch(Mystring.cbegin(),Mystring.cend(),Myreversedstring.begin());

    if(mismatchresult.first==Mystring.end() && mismatchresult.second==Myreversedstring.end() && (*(Mystring.end()-1)==*(Myreversedstring.end()-1)))
    {
        cout<<"equal"<<endl;  
    }
    else
    {
        cout<<"Not equal"<<endl;
    }

    return 0;
}
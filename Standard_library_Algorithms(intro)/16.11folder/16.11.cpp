#include <algorithm>
#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

int main()
{
    list <string> List1;
    list <string> List2;
    list <string> List3;

    List1.push_back("ab");
    List1.push_back("ba");
    List2.push_back("ac");
    List2.push_back("ca");

    merge(List1.begin(),List1.end(),List2.begin(),List2.end(),back_inserter(List3));


    for(auto items:List3)
    {
        cout<<items<<endl;
        items.pop_back();
    }


    return 0;
}
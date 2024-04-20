//Merging ordered lists
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
void MergeOrderedList(list<int>&l1,list<int>&l2,list<int>&l3);

int main()
{
    list<int>l1,l2,l3;

    l1.push_back(1);
    l1.push_back(3);
    l2.push_back(2);

    MergeOrderedList(l1,l2,l3);

    for(int items:l3)
    {
        cout<<items<<endl;
    }

    return 0;
}

void MergeOrderedList(list<int>&l1,list<int>&l2,list<int>&l3)
{
    //merge the ordered l1 and l2 lists into  an ordered l3
    auto state=merge(l1.cbegin(),l1.cend(),l2.cbegin(),l2.cend(),back_inserter(l3));
}
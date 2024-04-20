//copy a list in reverse order
#include <iostream>
#include <list>
#include <algorithm>
#include<random>


using namespace std;


int main()
{
    list <char>l1,l2;

    for(int i=97;i<107;i++)
    {
        l1.push_back(i);
    }
    
    //copy a list of 'a','b'...etc and place it in reverse order in another list
    copy(l1.cbegin(),l1.cend(),front_inserter(l2));

    return 0;
}
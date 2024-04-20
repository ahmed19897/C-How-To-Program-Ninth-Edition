//concatinating lists
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
template <typename T>
bool concat(list<T>&t1,list<T>&t2);

int main()
{
    list <char>mylist1;
    list <char>mylist2;


    for(int i=97;i<100;i++)
    {
        mylist1.push_back(i);
    }
    for(int j=100;j<103;j++)
    {
        mylist2.push_back(j);
    }

    //mylist1.merge(mylist2);
    concat(mylist1,mylist2);

    for(char items:mylist1)
    {
        cout<<items<<endl;
    }

    return 0;
}

template <typename T>
bool concat(list<T>&t1,list<T>&t2)
{
    if(!(t1.empty() && t2.empty()))
    {
        while(!t2.empty())
        {
            t1.push_back(t2.front());
            t2.pop_front();
        }
    }
    else
    {
        return 0;
    }
    return 1;
}
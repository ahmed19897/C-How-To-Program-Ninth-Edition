//rot13 chypering and dechypering
#include <string>
#include <iostream>



int main()
{
    std::string s("abc");

    std::string::reverse_iterator it=s.rbegin();

    while(it!=s.rend())
    {
        std::cout<<*it<<std::endl;
        it++;

    }




    return 0;
}

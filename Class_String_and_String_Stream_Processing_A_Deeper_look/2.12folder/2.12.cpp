//reverse print a string
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
void printhangman(void);
int main()
{
    std::string s;


    std::cout<<"please enter a word";
    std::cin>>s;
    std::string::reverse_iterator reviter;
    std::cout<<std::endl;

    for(char &iter:s)
    {
        if( islower(iter))
        {
            iter=toupper(iter);
        }
        else
        {
            iter=tolower(iter);
        }
    }

    reviter=s.rbegin();

    for(char iter:s)
    {
        std::cout<<*reviter;
        reviter++;
    }


    return 0;
}



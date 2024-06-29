//reverse print a string
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
void printhangman(void);
int main()
{
    std::string s;
    std::vector<std::string> Animal;

    Animal.push_back("LION");
    Animal.push_back("CAT");
    Animal.push_back("DOG");
    std::cout<<"please enter a word:";
    std::cin>>s;
    std::cout<<std::endl;

    for(char &iter:s)
    {
        if( islower(iter))
        {
            iter=toupper(iter);
        }
    }
    for(auto iter:Animal)
    {
        if(!(s.compare(0,iter.size(),iter)))
        {
            std::cout<<"Success"<<std::endl;
        }
    }
    return 0;
}



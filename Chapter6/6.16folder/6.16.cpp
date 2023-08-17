#include<iostream>
#include<iomanip>
#include<cmath>
#include<random>
#include<ctime>
#include<cstdlib>


int main()
{
    signed int seed=1;
    signed int minLimit;
    signed int maxLimit;
    bool       bUserInput_Continue=true;



    std::cout<<std::setw(10)<<"Please enter the minimum Limit:"<<std::endl;
    std::cin>>minLimit;

    std::cout<<'\n'<<std::setw(10)<<"Please enter the maximum Limit"<<std::endl;
    std::cin>>maxLimit;
    std::cout<<'\n'<<std::endl;

    while(bUserInput_Continue==true)
    {    
        srand(static_cast<signed int>(time(0)));
        std::cout<<std::setw(10)<<(minLimit+rand()%maxLimit)<<std::endl;
        std::cout<<'\n'<<std::setw(10)<<"would you like to continue? "<<std::endl;
        std::cin>>bUserInput_Continue;    
    }

    return 0;
}
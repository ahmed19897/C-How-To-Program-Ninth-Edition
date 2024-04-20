#include<iostream>
#include<iomanip>
#include<cmath>
#include<random>
#include<ctime>
#include<cstdlib>


int GetRandom(int max_value, int min_value, int step);

int main()
{
    signed int seed=1;
    bool       bUserInput_Continue=true;

    while(bUserInput_Continue==true)
    {    
        srand(static_cast<signed int>(time(0)));
        //in case of prime no.(((((rand()%maxvalue)/step)*step)+offsetfromstep......e.g step=2 ,offsetfromstep=1 to produce prime numbers....)+minimumvalue)
        std::cout<<std::setw(10)<<((((rand()%16)/4)*4)+6)<<std::endl;
        std::cout<<'\n'<<std::setw(10)<<"would you like to continue? "<<std::endl;
        std::cin>>bUserInput_Continue;  
        if(bUserInput_Continue!=0 && bUserInput_Continue!=1)
        {
            bUserInput_Continue=0;
        }  
    }

    return 0;
}

int GetRandom(int max_value, int min_value, int step)
{
    int random_value = (rand() % ((++max_value - min_value) / step)) * step + min_value;
    return random_value;
}
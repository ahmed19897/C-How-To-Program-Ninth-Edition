#include <iostream>



int main()
{
    int i=10;
    const int & ptr=i;

    const_cast<int &>(ptr)=4;
    std::cout<<i<<std::endl;


    return 0; 

}
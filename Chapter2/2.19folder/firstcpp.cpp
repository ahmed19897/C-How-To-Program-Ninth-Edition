#include <iostream>
//Input/Output and Operator
int main()
{
    int FirstNumber;
    int SecondNumber;
    int Sum;

    std::cout <<"please insert the first number to sum";
    std::cin >>FirstNumber;

    std::cout <<"please insert the second number to sum";
    std::cin >>SecondNumber;

    Sum=FirstNumber+SecondNumber;

    std::cout <<"your sum is "<<Sum <<std::endl;

    return 0;
}
#include<iostream>
#include<iomanip>
#include<cmath>


double hypotenuse(double side1,double side2);

int main()
{
    double u32_UserSide1=1,u32_UserSide2=1;

    while(u32_UserSide1!=0 && u32_UserSide2!=0)
    {
        std::cout<<std::setw(10)<<"Enter side1:"<<std::endl;
        std::cin>>u32_UserSide1;

        if(u32_UserSide1==0)
        {
            std::cerr<<"you entered 0 for the side's lenght"<<std::endl;
        }

        else
        {

            std::cout<<std::setw(10)<<"Enter side2:"<<std::endl;
            std::cin>>u32_UserSide2;

        }
        

        if(u32_UserSide1==0 || u32_UserSide2==0)
        {
            std::cerr<<"you entered 0 for the side's lenght"<<std::endl;
        }
        else
            std::cout<<'\n'<<std::setw(10)<<hypotenuse(u32_UserSide1,u32_UserSide2)<<'\n'<<std::endl;
    }
    return 0;
}

double hypotenuse(double side1,double side2)
{
    return sqrt(pow(side1,2)+pow(side2,2));
}
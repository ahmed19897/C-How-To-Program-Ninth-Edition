//concat strings using 2 different methods
#include <string>
#include <iostream>
#include <vector>


int main()
{

    std::string firstname;
    std::string lastname;
    std::string fullname;
    std::cout<<"Enter first name"<<std::endl;
    std::cin>>firstname;
    std::cout<<"Enter last name"<<std::endl;
    std::cin>>lastname;


    fullname+=firstname;
    fullname+=lastname;

    std::cout<<"Method one using + operator: "<<fullname<<std::endl;

    fullname.erase(fullname.begin(),fullname.end());

    fullname.append(firstname);
    fullname.append(lastname);

    std::cout<<"Method two using append class string method: "<<fullname<<std::endl;

 


    return 0;
}


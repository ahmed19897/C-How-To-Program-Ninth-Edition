#include <iostream>

namespace Currency
{
     int ONE=1;
     int TWO=2;
     int FIVE=5;
     int TEN=10;
     int TWENTY=20;
     int FIFTY=50;
     int HUNDRED=100;
}


using namespace Currency;

int main()
{
    const int & ptr=Currency::FIFTY;

    const_cast<int &>(ptr)=4;
    std::cout<<Currency::FIVE<<std::endl;


    return 0; 

}
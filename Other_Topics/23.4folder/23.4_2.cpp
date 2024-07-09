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
    const int & ptr=Currency::ONE;
    const int & ptr2=Currency::TWO;
    const int & ptr3=Currency::FIVE;
    const int & ptr4=Currency::TEN;
    const int & ptr5=Currency::TWENTY;
    const int & ptr6=Currency::FIFTY;
    const int & ptr7=Currency::HUNDRED;
    

    const_cast<int &>(ptr)=4;
    const_cast<int &>(ptr2)=4;
    const_cast<int &>(ptr3)=4;
    const_cast<int &>(ptr4)=4;
    const_cast<int &>(ptr5)=4;
    const_cast<int &>(ptr6)=4;
    const_cast<int &>(ptr7)=4;

    std::cout<<Currency::FIVE<<" "<<Currency::FIFTY<<"  "<<Currency::ONE<<"   "<<Currency::TWO<<" "<<Currency::HUNDRED<<" "<<Currency::TEN<<" "<<Currency::TWENTY<<std::endl;


    return 0; 

}
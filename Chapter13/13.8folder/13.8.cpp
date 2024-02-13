#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    void *my;
    int x=11;
    float y=5.0;
    double z=4.00;


    my=&x;
    cout<<"int address: "<<static_cast<int *>(my)<<endl;
    my=&y;
    cout<<"float address: "<<static_cast<float *>(my)<<endl;



    return 0;
}
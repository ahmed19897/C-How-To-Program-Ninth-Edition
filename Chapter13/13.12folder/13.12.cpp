#include <iomanip>
#include <iostream>

using namespace std;


int main()
{    
    cout<<setw(20)<<"Fahrenheit"<<setw(20)<<"Celisus"<<endl;
    for(int i=0;i<=212;i++)
    {
        cout<<setprecision(5)<<right<<setw(20)<<noshowpos<<i<<setw(20)<<showpos<<(5.0/9.0*(i-32))<<endl;
    }
    return 0;
}


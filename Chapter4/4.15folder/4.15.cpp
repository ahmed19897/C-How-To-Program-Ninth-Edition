#include <iostream>
using namespace std;


int main()
{
    unsigned int Salary=0;
    double GrossSalesPercentage=0.09;
    unsigned int BasicSalary=200;
    double Sales=0.0;
    

    while(Sales!=-1)
    {
        cout<<"please enter the sales:"<<endl;
        cin>>Sales;
        if (Sales!=-1)
        {
            Salary=BasicSalary+(GrossSalesPercentage*Sales);
            cout<<"Salary is :"<<Salary<<endl;
            cout<<'\n';
        }
    }
    return 0;
}
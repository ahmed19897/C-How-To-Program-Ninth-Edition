#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    const size_t products=5,salesPerson=4;
    array<array<int,products>,salesPerson>salesSummary={0};
    array<int,products>productSum={0};
    array<int,salesPerson>salesPersonSum={0};
    int salespersoncounter=1;
    int productscounter=1;
    for(auto &item:salesSummary)
    {
        
        for(int &items:item)
        {
            cout<<"Please enter the sales person "<<salespersoncounter<<" product nummber"<<productscounter<<" value: "<<endl;
            productscounter++;
            cin>>items;
        }
        salespersoncounter++;
        productscounter=1;
    }
    cout<<endl;

cout<<setw(50)<<"salesperson1"<<setw(25)<<"salesperson2"<<setw(25)<<"salesperson3"<<setw(25)<<"salesperson4"<<setw(25)<<"total per product"<<endl;


    for(int i=0;i<salesSummary[0].size();i++)
    {
        cout<<"product number "<<productscounter;
        productscounter++;
        for(int j=0;j<4;j++)
        {
            cout<<setw(25)<<salesSummary[j][i]<<' ';
            productSum[i]+=salesSummary[j][i];
            salesPersonSum[j]+=salesSummary[j][i];
        }
        cout<<setw(25)<<productSum[i]<<' ';
        cout<<endl;


    }
    cout<<"total per sales person"<<setw(19);
    for(int item:salesPersonSum)
    {
        cout<<item<<setw(26);
    }
    return 0;
}
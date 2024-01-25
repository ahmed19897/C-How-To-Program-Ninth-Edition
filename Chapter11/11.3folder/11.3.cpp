#include <iostream>
#include "ComissionEmployee.h"
#include"BaseComissionEmployee.h"

using namespace std;

int main()
{
    //ComissionEmployee MyEmployee("Ahmed","Osama","123-456",1234.0,0.6);
    //MyEmployee.print();

    ComissionEmployee MyComissionEmployeeApp("D","A","4",1.0,0.5);
    BaseComissionEmployee MyEmployee2("Mohamed","Osama","789-123",5678.0,0.4,100.0);

    MyComissionEmployeeApp=MyEmployee2.getComissionEmployee();
    cout<<MyComissionEmployeeApp.getFirstName()<<endl;

    MyEmployee2.print();





    return 0;
}
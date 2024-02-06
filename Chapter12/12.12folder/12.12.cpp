#include <iostream>
#include<string>
#include <vector>
#include "Employee.h"
#include"Salariedemployee.h"
#include "Comission.h"
#include "Basepluscomission.h"
#include <ctime>
#include<typeinfo>
using namespace std;

int main()
{
//Salaried Employee
    //Salariedemployee Mysalariedemployee("Ahmed","Osama","123-456",12.3);
    //Mysalariedemployee.Print();



//comission Employee
    // Comission MyComission("Ahmed","Osama","123-456",0.07,1234.0);
    // MyComission.Print();
    // cout<<MyComission.Earnings()<<endl;


//Base plus comission employee
    // Basepluscomission MyBasepluscomsissionemployee("Ahmed","Osama","123-456",Date(1,1,1997),0.07,1234.0,10000.0);
    // MyBasepluscomsissionemployee.Print();



//ploymorphism testing
    Basepluscomission MyBasepluscomsissionemployee("Ahmed","Osama","123-456",Date(2,1,1997),0.07,1234.0,10000.0);
    Comission MyComission("Ahmed","Osama","123-456",Date(1,1,1997),0.07,1234.0);
    Salariedemployee Mysalariedemployee("Ahmed","Osama","123-456",Date(2,1,1997),12.3);


    vector <Employee *> Differentemployee(3);
    Differentemployee[0]=& MyBasepluscomsissionemployee;
    Differentemployee[1]=& MyComission;
    Differentemployee[2]=& Mysalariedemployee;

    time_t curr_time=time(0);
	tm *tm_local = localtime(&curr_time);
    int CurrentMonth=tm_local->tm_mon+1;
 

    for(Employee *Emp :Differentemployee)
    {
        if(Emp->GetBirthmonth()== CurrentMonth )
        {
            cout<<"Current Customer type->"<<typeid(*Emp).name()<<endl;
            cout<<"Here is a raise ...Happy Birth Month: "<<(Emp->Earnings()+10.0)<<endl<<endl;
        }
        else
        cout<<"Current Customer type->"<<(typeid(*Emp).name())<<endl;
        cout<<"Monthly earnings: "<<Emp->Earnings()<<endl<<endl; 
    }


    return 0;
}


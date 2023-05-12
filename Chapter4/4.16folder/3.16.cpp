#include <iostream>
using namespace std;

int main()
{
    double NormalRatePayHours=0.0,OverTimePayRateHours=0.0,OvertimeRate=1.5,NormalPayTotal=0.0,NumberOfNoramalHours=0.0,OvertimePayTotal=0.0,
           NumberOfOverTimeHours=0.0;
    double Hours=0.0;
    double TotalSalary=0.0;
    while(Hours!=-1)
    {
        cout<<"Enter hours worked(-1 to end):"<<endl;
        cin>>Hours;
        if(Hours!=-1)
        {
            cout<<"Enter hourly rates for employee:"<<endl;
            cin>>NormalRatePayHours;
            OverTimePayRateHours=OvertimeRate*NormalRatePayHours;
            if (Hours<=40)
            {
                NormalPayTotal=NormalRatePayHours*Hours;
                OvertimePayTotal=0.0;
                TotalSalary=OvertimePayTotal+NormalPayTotal;
            }
            else if (Hours>40)
            {
                NormalPayTotal=NormalRatePayHours*40;
                NumberOfOverTimeHours=Hours-40;
                OvertimePayTotal=NumberOfOverTimeHours*OverTimePayRateHours;
                TotalSalary=OvertimePayTotal+NormalPayTotal;
            }
            cout<<"Salary is:"<<TotalSalary<<endl;
            cout<<'\n';
        }
    }
    return 0;
}
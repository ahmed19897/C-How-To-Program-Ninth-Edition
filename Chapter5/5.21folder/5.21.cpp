#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main()
{


    int userInput=0;
    int employeeType=0;
    int managerHours;
    float managerPay;
    int workerHours;
    int workerOvertime;
    float workerPay;
    int comissiongrossweeklysales;
    float comissionPay;
    int numberofpieces;
    int pieceWorkerpay;

    cout<<"if you have any more data press 1"<<endl;
    cin>>userInput;


    while(userInput==1)
    {
        cout<<"enter the employee number 1-manager 2-worker 3-comission based 4-peice"<<endl;
        cin>>employeeType;
        switch(employeeType)
        {
            case 1:
                cout<<"please enter the number of hours"<<endl;
                cin>>managerHours;

                managerPay=managerHours*1.0;

                cout<<"manager pay is :"<<managerPay<<endl;
            break;
            
            case 2:
                cout<<"please enter the number of hours:"<<endl;
                cin>>workerHours;

                if(workerHours<=40)
                {
                    workerPay=workerHours*1.0;
                }

                else if(workerHours>40)
                {
                   workerOvertime=workerHours-40 ;
                   workerPay=40*1.0+(workerOvertime*1.5);
                }

                cout<<"worker pay is :"<<workerPay<<endl;
            break;
            
            case 3:
                cout<<"please enter the weekly gross sales"<<endl;
                cin>>comissiongrossweeklysales;

                comissionPay=250.0+(0.057*comissiongrossweeklysales);

                cout<<"comission worker pay is:"<<comissionPay;
            break;
            
            case 4:
                cout<<"please enter the number of peices"<<endl;
                cin>>numberofpieces;

                pieceWorkerpay=numberofpieces*1.0;

                cout<<"piece worker pay is:"<<pieceWorkerpay;
            break;
            
            default:
            cout<<"you enter a number that doesn't match any employee type"<<endl;


        }

        cout<<'\n'<<"if you have any more data press 1"<<'\n'<<endl;
        cin>>userInput;


    }



    return 0;
}
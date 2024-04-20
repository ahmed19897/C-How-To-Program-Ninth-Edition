#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int userInput_productNumber=0;
    int userInput_productQuantity=0;
    double total=0.0;




    while(userInput_productNumber!=-1)
    {

        cout<<"please enter quantities sold: "<<endl;
        cin>>userInput_productQuantity;
        cout<<"please enter the product number or -1 to exit:"<<endl;
        cin>>userInput_productNumber;
        

        switch(userInput_productNumber)
        {
            case 1:

                total=userInput_productQuantity*2.98;

            break;
            case 2:

                total=userInput_productQuantity*4.50;


            break;
            case 3:

                total=userInput_productQuantity*9.98;

            break;
            case 4:

                total=userInput_productQuantity*4.49;


            break;
            case 5:

                total=userInput_productQuantity*6.68;

            break;
            default:
                    ;
            break;


        }
        cout<<'\n'<<"The total is :"<<total<<endl;
    }

    return 0;
}
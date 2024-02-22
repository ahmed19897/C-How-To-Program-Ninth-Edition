#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

typedef struct
{
    int accountNumber;
    char Name[15];
    float CurrentBalance;
}Mystruct;


int main()
{
    Mystruct Mystructoldmast;
    Mystruct Mystructoldmast2;
    Mystruct Mystructoldmast3;
    Mystruct Mystructoldmast4;
    
    bool enterdata;
    bool displaymaster;
    bool initializemaster;
    int numberofrecords=0;

    //start everytime with a new file for the day
    remove("trans.dat");

    //adding trunc allows us to open the file
    fstream inTransaction("trans.dat",ios::in | ios::out|ios::binary | ios::trunc);

    //if we couldn't open the file then we need to exit
    if(!inTransaction)
    {
        cerr<<"file couldn't be opened"<<endl;
        exit(EXIT_FAILURE);
    }

    //trying to read from master when it has no records(first time) results in the put and get pointer value to be -1 which results in then
    //the reading and writing to the file to fail , so the solution is to initialize the file like this0
    cout<<"Initialize master ?"<<endl;
    cin>>initializemaster;
    if(initializemaster)
    {

        //remove the old master and create a new master
        remove("newmast.dat");

        fstream outNewMaster("newmast.dat",ios::out | ios::in |ios::app | ios::binary);
        //if we couldn't open the file then we need to exit
        if(!outNewMaster)
        {
            cerr<<"file couldn't be opened"<<endl;
            exit(EXIT_FAILURE);
        }
        for(int i=0;i<100;i++)
        {
            Mystructoldmast3.accountNumber=i+1;
            outNewMaster.write(reinterpret_cast<char *>(&Mystructoldmast3),sizeof(Mystructoldmast3));
        }
    }
    cout<<"enter new data ?"<<endl;
    cin>>enterdata;
    while(enterdata)
    {
        numberofrecords++;
        cout<<"please enter the customer data :account_number name currentbalance"<<endl;
        cout<<':';
        
        //read the data in Mystructoldmast
        cin>>Mystructoldmast.accountNumber>>Mystructoldmast.Name>>Mystructoldmast.CurrentBalance;
        
        //put (write) the data to the file 
        inTransaction.write(reinterpret_cast< char *>(&Mystructoldmast),sizeof(Mystructoldmast));
        
        //continue entering data ?
        cout<<"enter new data ?"<<endl;
        cin>>enterdata;
    }

    //placing the open mode in trunc overrideen the tell and seek commands and always put the output in the end of the file,
    // so when we removed the ios::trunc we were able to update the file as we want in any record randomly as desired
    fstream outNewMaster("newmast.dat",ios::out | ios::in | ios::binary);

    //if we couldn't open the file then we need to exit
    if(!outNewMaster)
    {
        cerr<<"file couldn't be opened"<<endl;
        exit(EXIT_FAILURE);
    }

    //go to begining of file to start reading
    inTransaction.seekp(0,ios::beg);
    inTransaction.seekg(0,ios::beg);
    //while we havn't reached end of file
    while(numberofrecords)
    {
        numberofrecords--;
        
        //read from file
        inTransaction.read(reinterpret_cast< char *>(&Mystructoldmast2),sizeof(Mystructoldmast2));
        
        //output the data to the gui
        cout<<Mystructoldmast2.accountNumber<<'\n'<<Mystructoldmast2.CurrentBalance<<endl<<endl;

        //if we have a transaction of account number that is not available we need to not wirte it and output an un buffered error message
        if(Mystructoldmast2.accountNumber<100)
        {
            //wirte the data to the master file
            outNewMaster.seekg((Mystructoldmast2.accountNumber-1)*sizeof(Mystructoldmast2));
            outNewMaster.seekp((Mystructoldmast2.accountNumber-1)*sizeof(Mystructoldmast2));
            outNewMaster.read(reinterpret_cast< char *>(&Mystructoldmast3),sizeof(Mystructoldmast3));
            if(Mystructoldmast3.accountNumber==Mystructoldmast2.accountNumber)
            {
                outNewMaster.seekg((Mystructoldmast2.accountNumber-1)*sizeof(Mystructoldmast2));
                outNewMaster.seekp((Mystructoldmast2.accountNumber-1)*sizeof(Mystructoldmast2));

                Mystructoldmast2.CurrentBalance+=Mystructoldmast3.CurrentBalance;

                outNewMaster.write(reinterpret_cast< char *>(&Mystructoldmast2),sizeof(Mystructoldmast2));
            }
        }
        else
        {
            //if we need to add  the new account we need to reopen the file in app mode for example so we can append to the end
            cerr<<"No data for the account number:"<<Mystructoldmast2.accountNumber<<endl;
        }
    }

    cout<<"display the master?"<<endl;
    cin>>displaymaster;
    if(displaymaster)
    {
        cout<<outNewMaster.tellp()<<' '<<outNewMaster.tellg()<<endl;
        outNewMaster.seekp(0,ios::beg);
        outNewMaster.seekg(0,ios::beg);
        outNewMaster.clear();
        while(!outNewMaster.eof())
        {
            cout<<outNewMaster.tellp()<<' '<<outNewMaster.tellg()<<endl;
            //read from file
            outNewMaster.read(reinterpret_cast< char *>(&Mystructoldmast4),sizeof(Mystructoldmast4));
            //output the data to the gui
            if(!outNewMaster.eof())
            cout<<"Account number:"<<Mystructoldmast4.accountNumber<<'\n'<<"Name:"<<Mystructoldmast4.Name<<'\n'<<"Current Balance:"<<Mystructoldmast4.CurrentBalance<<endl<<endl; 
        }
        displaymaster=false;
    }

    return 0;
}


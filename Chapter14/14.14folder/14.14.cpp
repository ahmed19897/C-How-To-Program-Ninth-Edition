#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

typedef struct
{
    int Score;
    char Name[50];
}Mystruct;

string NameRef[14]={"Request","Action","New",
"Required","Document","Invoice","Generic salutations",
"Poor grammar","Bill","INV","Message","Verification",
"Internet fax","V/m"};


int main()
{
    Mystruct Mystructoldmast[14];
    Mystruct readvalue;
    char UserInputstring[100];
    string StringSen;
    string Strfromfile;
    int Newword[101]={0};
    int i=0;
    bool displaymaster;
    bool initializemaster;
    string wordarray[100];
    int Totalscore=0;


    

    for(int i=0;i<14;i++)
    {
       NameRef[i].copy(Mystructoldmast[i].Name,sizeof(Mystructoldmast[i].Name));
       Mystructoldmast[i].Score=i+1;
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
        for(int i=0;i<14;i++)
        {
            outNewMaster.write(reinterpret_cast<char *>(&Mystructoldmast[i]),sizeof(Mystructoldmast[i]));
        }
        outNewMaster.close();
    }
    


    cout<<"display the master?"<<endl;
    cin>>displaymaster;
    if(displaymaster)
    {
        fstream outNewMaster("newmast.dat",ios::out |ios::app|ios::binary);
        //if we couldn't open the file then we need to exit
        if(!outNewMaster)
        {
            cerr<<"file couldn't be opened"<<endl;
            exit(EXIT_FAILURE);
        }
        outNewMaster.seekp(0,ios::beg);
        outNewMaster.seekg(0,ios::beg);
        outNewMaster.clear();
        while(!outNewMaster.eof())
        {
            //read from file
            outNewMaster.read(reinterpret_cast< char *>(&readvalue),sizeof(readvalue));
            //output the data to the gui
            if(!outNewMaster.eof())
            cout<<"score:"<<readvalue.Score<<'\n'<<"Name:"<<readvalue.Name<<endl<<endl; 
        }
        displaymaster=false;
    }

    cout<<"please enter your string:"<<endl;

    //the use of the .ignore is to discard the '\n' from previous inputs in the program otherwise the cin.getline() will read the '\n'
    //as the first character and then runs till the end
    cin.ignore();

    //adding the sizeof() allows the cin.geline to read the entrire user string ,if we don't use the sizeof() the cin.getline will not read 
    //the whole string
    cin.getline(UserInputstring,sizeof(UserInputstring),'\n');

    //assign the string from an array of character to a string type to use the string method .find()
    StringSen=UserInputstring;

    //find the number of words in the user sentence
    while(Newword[i-1]!=-1 && i<(sizeof(Newword)/sizeof(Newword[0])))
    {
        Newword[i]=StringSen.find(' ',(Newword[i-1]+1));
        i++;
    }


    for(int j=0;j<i;j++)
    {
        if(j==0)
        {
            wordarray[j]=StringSen.substr(0,(Newword[j])); 
            //seekp doesn't work for me ,so to read from the beginning of the file we will close and re open the file
            fstream outNewMaster("newmast.dat",ios::in );
            //if we couldn't open the file then we need to exit
            if(!outNewMaster)
            {
                cerr<<"file couldn't be opened"<<endl;
                exit(EXIT_FAILURE);
            }   
            
            outNewMaster.seekp(0,ios::beg);
            outNewMaster.seekg(0,ios::beg);
            outNewMaster.clear();
            while(!outNewMaster.eof())
            {
                //read from file
                outNewMaster.read(reinterpret_cast< char *>(&readvalue),sizeof(readvalue));
                //output the data to the gui
                if(!outNewMaster.eof())
                {
                    Strfromfile=readvalue.Name;
                    if(Strfromfile.find(wordarray[j])!=-1)
                    {
                        Totalscore+=readvalue.Score;
                    }
                }
            }
            outNewMaster.close();
        }
        else
        {
            wordarray[j]=StringSen.substr((Newword[j-1]+1),((Newword[j]-Newword[j-1])-1));
            
            fstream outNewMaster("newmast.dat",ios::in );
            //if we couldn't open the file then we need to exit
            if(!outNewMaster)
            {
                cerr<<"file couldn't be opened"<<endl;
                exit(EXIT_FAILURE);
            } 


            outNewMaster.seekp(0,ios::beg);
            outNewMaster.seekg(0,ios::beg);
            outNewMaster.clear();
            while(!outNewMaster.eof())
            {
                //read from file
                outNewMaster.read(reinterpret_cast< char *>(&readvalue),sizeof(readvalue));
                //output the data to the gui
                if(!outNewMaster.eof())
                {
                    Strfromfile=readvalue.Name;
                    if(Strfromfile.find(wordarray[j])!=-1)
                    {
                        Totalscore+=readvalue.Score;
                    }
                }
            }
            outNewMaster.close();
        }
        
    }
    cout<<"The Total score is:"<<Totalscore<<endl;
    return 0;
}


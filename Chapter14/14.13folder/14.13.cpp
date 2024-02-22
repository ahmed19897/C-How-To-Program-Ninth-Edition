#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;


int main()
{
    
    bool displaymaster;
    bool initializemaster;
    int result;

    char                x               ;    
    unsigned char       xx              ;
    short int           xxx             ;
    unsigned short int  xxxx            ;
    int                 xxxxx           ;
    unsigned int        xxxxxx          ;
    long int            xxxxxxx         ;
    unsigned long int   xxxxxxxx        ;
    float               xxxxxxxxx       ;
    double              xxxxxxxxxx      ;
    long                xxxxxxxxxxx     ;

    //trying to read from master when it has no records(first time) results in the put and get pointer value to be -1 which results in then
    //the reading and writing to the file to fail , so the solution is to initialize the file like this0
    //remove the old master and create a new master
    remove("newmast.dat");
    fstream outNewMaster("newmast.dat",ios::out | ios::in |ios::app | ios::binary);
    //if we couldn't open the file then we need to exit
    if(!outNewMaster)
    {
        cerr<<"file couldn't be opened"<<endl;
        exit(EXIT_FAILURE);
    }

    result=sizeof(char              );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(unsigned char     );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(short int         );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(unsigned short int);
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(int               );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(unsigned int      );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(long int          );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(unsigned long int );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(float             );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(double            );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));
    result=sizeof(long   double     );
    outNewMaster.write(reinterpret_cast<char *>(&result),sizeof(int));



    outNewMaster.seekp(0,ios::beg);
    outNewMaster.seekg(0,ios::beg);
    outNewMaster.clear();

    for(int i=0;i<10;i++)
    {
        //read from file
        outNewMaster.read(reinterpret_cast< char *>(&result),sizeof(result));
        //output the data to the gui
        cout<<result<<endl;
    }



    return 0;
}


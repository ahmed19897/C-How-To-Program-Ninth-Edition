#include <array>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream outNewMaster("newmast.txt");

    //if we couldn't open the file then we need to exit
    if(!outNewMaster)
    {
        cerr<<"file couldn't be opened"<<endl;
        exit(EXIT_FAILURE);
    }



//this part is to populate the text file 
     array <int,10>Myarray={1,2,3,4,5,6,7,8,9,10};
     for(int i=0;i<10;i++)
     {
         //outNewMaster<<(reinterpret_cast<char *>(Myarray[i]));
         outNewMaster<<((Myarray[i]));
         outNewMaster<<' ';
     } 
     outNewMaster.close();

    return 0;
}
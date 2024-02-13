#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    char Myarraygetline[5];

    cin.getline(Myarraygetline,'\n');//the null character inserted is visibe in the dedbug
    cout.write(Myarraygetline,5);


    char Myarrayget[5];
    cin.get(Myarrayget,sizeof(Myarrayget),'\n');//the null character inserted is visibe in the dedbug
    cout.write(Myarrayget,5);

    return 0;
}
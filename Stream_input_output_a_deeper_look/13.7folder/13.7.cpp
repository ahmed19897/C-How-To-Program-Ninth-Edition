#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int myvar;

    cout<<"please enter the values in hex:";
    cin>>hex>>myvar;
    cout<<"Dec:"<<dec<<myvar<<'\n'<<
    "Oct:"<<oct<<myvar<<'\n'<<
    "Hex:"<<hex<<myvar<<endl;

    cout<<"please enter the values in dec:";
    cin>>dec>>myvar;
    cout<<"Dec:"<<dec<<myvar<<'\n'<<
    "Oct:"<<oct<<myvar<<'\n'<<
    "Hex:"<<hex<<myvar<<endl;

    cout<<"please enter the values in oct:";
    cin>>oct>>myvar;
    cout<<"Dec:"<<dec<<myvar<<'\n'<<
    "Oct:"<<oct<<myvar<<'\n'<<
    "Hex:"<<hex<<myvar<<endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    char Character;

    cout<<"Please enter the character you want to see the ascii value to: ";

    cin>>Character;



    cout<<static_cast<int>(Character);



    return 0;
}
#include<iostream>
#include<iostream>
using namespace std;
enum class AccountType{Saving,Checking,Investment};

int main()
{
    enum AccountType{Saving,Checking,Investment};






    AccountType Local=Saving;
    AccountType::Checking;

    cout<<Local<<endl;
    cout<<AccountType::Investment<<endl;



    return 0;
}
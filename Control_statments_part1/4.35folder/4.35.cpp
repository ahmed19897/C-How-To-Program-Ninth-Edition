#include <iostream>

using namespace std;


class Account
{
    public:

    Account(unsigned int accountNumber,string firstName,string lastName,double creditAmount)
        :accountNumber(accountNumber),firstName(firstName),lastName(lastName),creditAmount(creditAmount)
    {

    }


    private:

        string firstName;
        string lastName;
        double creditAmount;
        unsigned int accountNumber;

};






int main()
{
    unsigned int studentCounter{0};
    double initialBalance{1000.0};
    Account Account1{123,"Ahmed","Osama",999};






    return 0;
}



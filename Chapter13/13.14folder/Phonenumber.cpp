#include "Phonenumber.h"
#include <iomanip>

using namespace std;

std::ostream& operator<<(std::ostream & output,const Phonenumber & number)
{
    if((!number.state))
    {
        output<<number.areaCode<<'\n'
        <<number.exchange<<'\n'
        <<number.line<<'\n'<<endl;
    }
    else
    {
        output<<"The object data was not valid during input";
    }
    return output;
}

std::istream& operator>>(std::istream & input, Phonenumber & number)
{
    input.getline(number.PhoneNumber,15,'\n');

        if((input.gcount()!=15) ||number.PhoneNumber[0]!='(' || number.PhoneNumber[4]!=')' || number.PhoneNumber[5]!=' ' || number.PhoneNumber[9]!='-' )
        {
            input.clear(ios::failbit);

            number.state=input.fail();

            cerr<<"Input is wrong ,number of characters entered is:"
            <<cin.gcount()-1<<"\nFail bit is:"<<input.fail();
        }

        else if(number.PhoneNumber[1]=='0' || number.PhoneNumber[1]=='1' )
        {
            input.clear(ios::failbit);

            number.state=input.fail();

            cerr<<"Input is wrong ,the extension should not be 1 or 0";
        }

        else if(number.PhoneNumber[2]!='0' && number.PhoneNumber[2]!='1' )
        {
            input.clear(ios::failbit);

            number.state=input.fail();

            cerr<<"Input is wrong ,the middle area code number should  be 1 or 0";
        }

        else
        {
            for(int i=1;i<4;i++)
            {
                number.areaCode+=(number.PhoneNumber[i]);
            }
            for(int i=6;i<9;i++)
            {
                number.exchange+=(number.PhoneNumber[i]);
            }

            for(int i=10;i<15;i++)
            {
                number.line+=(number.PhoneNumber[i]);
            }
        }


    return input;
}
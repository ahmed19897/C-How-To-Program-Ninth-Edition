//extract words ending in 'i' or 'ay'
#include <string>
#include <iostream>
#include <vector>

void BreakDownSentenceToWords(std::string& userstring);

int main()
{

    std::string userstring;


    getline(std::cin,userstring,'\n');

    std::cout<<"Done"<<'\n'<<std::endl;


    BreakDownSentenceToWords(userstring);


    return 0;
}
void BreakDownSentenceToWords(std::string& userstring)
{
    int beginingofword=0;
    int endofword=0;
    bool exit=false;
    while(!exit)//
    {
        endofword=userstring.find(" ",beginingofword);
        if(userstring.find(" ",beginingofword)!=std::string::npos)
        {
            if ( userstring[endofword-1]=='i' ||  (userstring[endofword-2]=='a' && userstring[endofword-1]=='y')    )
            {
                std::cout<<userstring.substr(beginingofword,endofword-beginingofword)<<std::endl;
                beginingofword=endofword+1;
            }
            else
            {
                beginingofword=endofword+1;
            }
        }
        else//this else is for the last word only when find couldn't find more spaces in the sentence
        {
            if(userstring.substr( userstring.length() - 2 ) == "ay" || userstring.substr( userstring.length() - 1 ) == "i")
            {
                std::cout<<userstring.substr(beginingofword)<<std::endl;
            }
            exit=true;
        }
    }

}


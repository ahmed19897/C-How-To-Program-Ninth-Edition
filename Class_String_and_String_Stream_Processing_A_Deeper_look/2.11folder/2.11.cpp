//hangman game
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
void printhangman(void);
int main()
{
    std::string s;
    
    std::ifstream ifs ("myfile.txt");
    char userchoice;
    int charindex=0;
    int endofword=0;
    int numberoffailedattemps=0;
    int numberoffinishedletters=0;
    bool exit=false;
    bool completed=false;
//read the word to be guessed from the text file
    ifs>>s;

    bool showchar[s.size()]={false};
    int remainingchar=s.size();

    std::cout<<"Guess the word: ";
    for(int i=0;i<s.size();i++)
    {
        std::cout<<'x';
    }
    std::cout<<std::endl;

//game loop
    while(!exit)
    {
        std::cout<<"what is your letter guess : ";
        std::cin >> userchoice;


//check if current user guess is a valid letter or not
        if(s.find_first_of(userchoice)!=std::string::npos)
        {
            std::cout<<"Yes"<<std::endl;
            for(int i=0;i<s.size();i++)
            {
                endofword=s.find(userchoice,charindex);
                if(i==endofword)
                {   
                    showchar[endofword]=true;
                    charindex=endofword+1;
                }
            }  
        }
        else
        {
            std::cout<<"No"<<std::endl;
            numberoffailedattemps++;
        }




//check if the user excedded the number of allowed attempts per game or not and if not then print the current word status
        if(numberoffailedattemps>=s.size())
        {
            std::cout<<"Play again ?"<<std::endl;
            std::cin>>completed;
            if(completed)
            {
                for(int i=0;i<s.size();i++)
                {
                    showchar[i]=false;
                    numberoffinishedletters=0;
                    numberoffailedattemps=0;
                }
            }
            else
            {
                exit=true;
                printhangman();
            }
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(showchar[i]==true)
                {
                    std::cout<<s.at(i);
                    numberoffinishedletters++;
                    charindex=0;    
                }
                else
                {
                    std::cout<<'x';
                }
            }
            std::cout<<std::endl;




//check if the user finished the game after his latest letter guess  and if not reset the number of finished letter so we can recalculate them after his next guess
            if(numberoffinishedletters==s.size())
            {
                std::cout<<"Done"<<std::endl;
                std::cout<<"Play again ?"<<std::endl;
                std::cin>>completed;
                if(completed)
                {
                    for(int i=0;i<s.size();i++)
                    {
                        showchar[i]=false;
                        numberoffinishedletters=0;
                        numberoffailedattemps=0;
                    }
                }
                else
                {
                    exit=true;
                } 
            }
            else
            {
                numberoffinishedletters=0;
            } 
        }
    }



    return 0;
}


void printhangman(void)
{
	std::cout<<" "<<"o"<<" "<<std::endl;
	std::cout<<"/"<<"|"<<'\\'<<std::endl;
	std::cout<<" "<<"|"<<" "<<std::endl;
	std::cout<<"/"<<" "<<'\\'<<std::endl;
}
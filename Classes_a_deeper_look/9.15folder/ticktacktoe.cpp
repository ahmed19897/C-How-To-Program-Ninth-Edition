#include "ticktacktoe.h"
#include<iostream>


ticktacktoe::ticktacktoe()
{
    for (auto &itemref : table)
    {
        for(auto &item :itemref)
        {
            item=0;
        }
    }
}

ticktacktoe::~ticktacktoe()
{
}

void ticktacktoe::ResetBoard()
{
        for (auto &itemref : table)
    {
        for(auto &item :itemref)
        {
            item=0;
        }
    }   
}


void ticktacktoe::displaythestat()const
{
    for (auto itemref : table)
    {
        for(auto item :itemref)
        {
            cout<<item<<"        ";
        }
        cout<<'\n'<<endl;
    }  
}


void ticktacktoe::play(int playernumber)
{
    bool gamewonordraw=false;
    int wheretoplaycol,wheretoplayrow ;
    int playsremaining=9;
    //input validtation check for the 2-d array table and player number
    if( playernumber<=2)
    {           
                //convert the player number from 1-2 to 0-1 to ease toggling the numbers using xor
                currentplayernumber=playernumber-1;  
                while(gamewonordraw==false && playsremaining!=0)
                {     
                    cout<<"please player "<< currentplayernumber+1<<" entter the index you want to play in col first then row(e.g-> 2 3):";
                    cin>>wheretoplaycol>>wheretoplayrow;
                    if(wheretoplaycol<=2 && wheretoplayrow <=2)
                    {
                        //spot is empty
                        if(table[wheretoplayrow][wheretoplaycol]==0)
                        {
                            //occupy it by the current player
                           table[wheretoplayrow][wheretoplaycol]= currentplayernumber+1;
                            if(hassomeonewon())
                            {
                                cout<<"player "<<currentplayernumber+1<<" won!"<<endl;
                                gamewonordraw=true;
                            }
                            //toggle the current player  between 0 and 1
                            displaythestat();
                            currentplayernumber=currentplayernumber^1;
                            playsremaining--;
                        }
                        else
                            cout<<"this position is occupied";
                    }
                    else
                        throw invalid_argument("playing position must not exceed 2 ( 0..1..2 only)");
                }
    }
    else
    throw invalid_argument("out of index parameters: player must be 1 or 2 ");
}



bool ticktacktoe::hassomeonewon()
{
    if(table[0][0]==table[0][1] && table[0][1]==table[0][2] && table[0][0]!=0 && table[0][1]!=0 && table[0][2]!=0)//col1
    {
        cout<<"row 1 completed"<<endl;
        return true;
    }
    else if(table[1][0]==table[1][1]&& table[1][1]==table[1][2] && table[1][0]!=0 && table[1][1]!=0 && table[1][2]!=0)//col2
    {
        cout<<"row 2 completed"<<endl;
        return true; 
    }
    else if(table[2][0]==table[2][1]&& table[2][1]==table[2][2] && table[2][0]!=0 && table[2][1]!=0 && table[2][2]!=0)//col3
    {
        cout<<"row 3 completed"<<endl;
        return true;
    }


    else if(table[0][0]==table[1][0]&& table[1][0]==table[2][0] && table[0][0]!=0 && table[1][0]!=0 && table[2][0]!=0)//row1
    {
        cout<<"col 1 completed"<<endl;
        return true;
    }
    else if(table[0][1]==table[1][1]&& table[1][1]==table[2][1] && table[0][1]!=0 && table[1][1]!=0 && table[2][1]!=0)//row2
    {
        cout<<"col 2 completed"<<endl;
        return true;
    }
    else if(table[2][0]==table[2][1]&& table[2][1]==table[2][2] && table[2][0]!=0 && table[2][1]!=0 && table[2][2]!=0)//row3
    {
        cout<<"col 3 completed"<<endl;
        return true;
    }

    else if(table[0][0]==table[1][1]&& table[1][1]==table[2][2] && table[0][0]!=0 && table[1][1]!=0 && table[2][2]!=0)//diag2
    {
        cout<<"diag 1 completed"<<endl;
        return true;
    }
    else if(table[2][0]==table[1][1]&& table[1][1]==table[0][2] && table[2][0]!=0 && table[1][1]!=0 && table[0][2]!=0)//diag2
    {
        cout<<"diag 2 completed"<<endl;
        return true;
    }
    else 
        return false;
}
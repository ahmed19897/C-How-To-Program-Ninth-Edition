#include "DeckOfCards.h"
#include<random>
#include <iostream>
#include <algorithm>
#include<ctime>
#include<array>
using namespace std;
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(1,52);


DeckOfCards::DeckOfCards()
{
    for(int i=1;i<=52;i++)
    {
        if(i>=1 && i<=13)
        {
            deck[i]=i+10;//10 respresents spades
        }
        else if (i>=13 && i<=26)
        {
            deck[i]=i+20;//20 represents hearts
        }
        else if(i>=27 && i<=39)
        {
            deck[i]=i+30;//30 represents clubs
        }
        else
            deck[i]=i+40;//40 represents diamonds
        
    }
    currentCard=0;
}

DeckOfCards::~DeckOfCards()
{
}

void DeckOfCards::Shuffle()
{
    for(int i=1;i<=52;i++)
    {
        Swap(&deck[i],&deck[randomInt(engine)]);
    }
}


int DeckOfCards::decodeface(int int1)
{
    if(int1>=11 && int1<=23)
    {
        return (int1-10);
    }
    else if(int1>=34 && int1<=46)
    {
        return ((int1-13)-20);
    }
    else if(int1>=57 && int1<=69)
    {
        return ((int1-26)-30);
    }
    else if(int1>=80 && int1<=92)
    {
        return ((int1-39)-40);
    }
    return 14;
}

int DeckOfCards::decodesuit(int int1)
{
    if(int1>=11 && int1<=23)
    {
        return 1;
    }
    else if(int1>=34 && int1<=46)
    {
        return 2;
    }
    else if(int1>=57 && int1<=69)
    {
        return 3;
    }
    else if(int1>=80 && int1<=92)
    {
        return 4;
    }
    return 5;
}




void DeckOfCards::Deal_Card(array<int,5>& arrface,array<int,5>& arrsuit)
{
    arrface[0]= decodeface(deck[currentCard]);
    arrsuit[0]= decodesuit(deck[currentCard]);
    currentCard++;
    arrface[1]= decodeface(deck[currentCard]);
    arrsuit[1]= decodesuit(deck[currentCard]);
    currentCard++;
    arrface[2]= decodeface(deck[currentCard]);
    arrsuit[2]= decodesuit(deck[currentCard]);
    currentCard++;
    arrface[3]= decodeface(deck[currentCard]);
    arrsuit[3]= decodesuit(deck[currentCard]);
    currentCard++;
    arrface[4]= decodeface(deck[currentCard]);
    arrsuit[4]= decodesuit(deck[currentCard]);
    currentCard++;    
}

bool DeckOfCards::More_Cards()
{
    if(currentCard>52)
    {
        return 0;
    }
    else 
        return 1;
}


void DeckOfCards::DisplayDeck()
{
    for(int i=1;i<53;i++)
    {
        if(deck[i]>=11 && deck[i]<=23)
        {
            card.setface(deck[i]-10);
            card.setsuit(((deck[i]-card.getface())/10));
            std::cout<<card.to_String()<<std::endl;
        }
        else if(deck[i]>=34 && deck[i]<=46)
        {
            card.setface((deck[i]-13)-20);
            card.setsuit((((deck[i]-13)-card.getface())/10));
            std::cout<<card.to_String()<<std::endl;
        }
        else if(deck[i]>=57 && deck[i]<=69)
        {
            card.setface((deck[i]-26)-30);
            card.setsuit((((deck[i]-26)-card.getface())/10));
            std::cout<<card.to_String()<<std::endl;
        }
        else if(deck[i]>=80 && deck[i]<=92)
        {
            card.setface((deck[i]-39)-40);
            card.setsuit((((deck[i]-39)-card.getface())/10));
            std::cout<<card.to_String()<<std::endl;
        }
        else
            throw invalid_argument("somthing wrong in display deck");
    }
}

void DeckOfCards::Swap(int *int1,int *int2)
{
    int  ptr;

    ptr=*int1;
    *int1=*int2;
    *int2=ptr;


}


bool DeckOfCards::haspair(array<int,5> myArray)
{
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(myArray[i]==myArray[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
bool DeckOfCards::hastwopair(array<int,5> myArray)
{
    int twoparirs=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(myArray[i]==myArray[j])
            {
                twoparirs++;
            }
        }
    }
    if(twoparirs==2)
    {
        return 1;
    }

    return 0;
}


bool DeckOfCards::threeofakind(array<int,5> myArray)
{
    array<int,14> threeofakind={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    array<int,1>temp={3};
    for(int i=0;i<5;i++)
    {

        threeofakind[myArray[i]]++;

    }
    auto it=search(threeofakind.begin(),threeofakind.end(),temp.begin(),temp.end());
    if(*it==3)
    {
        return 1;
    }

    return 0;
}

bool DeckOfCards::fourofakind(array<int,5> myArray)
{
    array<int,14> fourofakind={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    array<int,1>temp={4};
    for(int i=0;i<5;i++)
    {

        fourofakind[myArray[i]]++;

    }
    auto it=search(fourofakind.begin(),fourofakind.end(),temp.begin(),temp.end());
    if(*it==4)
    {
        return 1;
    }

    return 0; 
}


bool DeckOfCards::hasflush(array<int,5> myArray)
{
    array<int,5> flush={0,0,0,0,0};
    array<int,1>temp={5};
    for(int i=0;i<5;i++)
    {

        flush[myArray[i]]++;

    }
    auto it=search(flush.begin(),flush.end(),temp.begin(),temp.end());
    if(*it==5)
    {
        return 1;
    }
    return 0;
}

bool  DeckOfCards::straight(array<int,5> myArray)
{
    int straight=0;

    sort(myArray.begin(),myArray.end());

    for(int i=0;i<5;i++)
    {
       if(myArray[i]==(myArray[i+1]-1))
       {
            straight++;
       }
    }
    if(straight==4)
    {
        return 1;
    }

    return 0;
}
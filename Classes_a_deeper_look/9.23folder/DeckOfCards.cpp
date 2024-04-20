#include "DeckOfCards.h"
#include<random>
#include <iostream>
#include<ctime>
using namespace std;
default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(0,51);


DeckOfCards::DeckOfCards()
{
    for(int i=0;i<52;i++)
    {
        if(i>=0 && i<=12)
        {
            deck[i]=i+10;//10 respresents spades
        }
        else if (i>=13 && i<=25)
        {
            deck[i]=i+20;//20 represents hearts
        }
        else if(i>=26 && i<=38)
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
    for(int i=0;i<52;i++)
    {
        Swap(&deck[i],&deck[randomInt(engine)]);
    }
}

int DeckOfCards::Deal_Card()
{
    int local=deck[currentCard];
    currentCard++;
    return local;
    
}

bool DeckOfCards::More_Cards()
{
    if(currentCard>=52)
    {
        return 0;
    }
    else 
        return 1;
}


void DeckOfCards::DisplayDeck()
{
    for(int i=0;i<52;i++)
    {
        if(deck[i]>=10 && deck[i]<=22)
        {
            card.setface(deck[i]-10);
            card.setsuit(((deck[i]-card.getface())/10)-1);
            std::cout<<card.to_String()<<std::endl;
        }
        else if(deck[i]>=33 && deck[i]<=45)
        {
            card.setface((deck[i]-13)-20);
            card.setsuit((((deck[i]-13)-card.getface())/10)-1);
            std::cout<<card.to_String()<<std::endl;
        }
        else if(deck[i]>=56 && deck[i]<=68)
        {
            card.setface((deck[i]-26)-30);
            card.setsuit((((deck[i]-26)-card.getface())/10)-1);
            std::cout<<card.to_String()<<std::endl;
        }
        else if(deck[i]>=79 && deck[i]<=91)
        {
            card.setface((deck[i]-39)-40);
            card.setsuit((((deck[i]-39)-card.getface())/10)-1);
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
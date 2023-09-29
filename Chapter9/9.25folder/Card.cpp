#include "Card.h"
#include <bits/stdc++.h>

Card::Card(int face,int suit)
{
    if(face>=1 && face<=13)
    {
        this->face=face;
    }
    if(suit>=1 && suit<=4)
    {
        this->suit=suit;
    }


}
Card::~Card()
{

}
string Card::to_String()
{
    string localarray=facearr[face]+' '+"of"+' '+suitarr[suit];
    return localarray;          
}

void Card::setface(int face)
{
    if(face>=1 && face<=13)
    {
        this->face=face;
    }
    else 
        throw invalid_argument("face must be between 1 and 13");
}
void Card::setsuit(int suit)
{
    if(suit>=1 && suit<=4)
    {
        this->suit=suit;
    }
    else
        throw invalid_argument("suit must be between 1 and 4");
}


int Card::getface()const
{
    return this->face;
}
int Card::getsuit()const
{
    return this->suit;
}



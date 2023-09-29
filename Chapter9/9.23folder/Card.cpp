#include "Card.h"
#include <bits/stdc++.h>

Card::Card(int face,int suit)
{
    if(face>=0 && face<=12)
    {
        this->face=face;
    }
    if(suit>=0 && suit<=3)
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
    if(face>=0 && face<=12)
    {
        this->face=face;
    }
    else 
        throw invalid_argument("face must be between 0 and 12");
}
void Card::setsuit(int suit)
{
    if(suit>=0 && suit<=3)
    {
        this->suit=suit;
    }
    else
        throw invalid_argument("suit must be between 0 and 3");
}


int Card::getface()const
{
    return this->face;
}
int Card::getsuit()const
{
    return this->suit;
}
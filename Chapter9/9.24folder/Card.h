#include<iostream>
using namespace std;
#ifndef CARD_H
#define CARD_H
class Card
{
    public:
        Card(int =1,int =1);
        ~Card();
        string to_String();
        void setface(int);
        void setsuit(int);
        int getface()const;
        int getsuit()const;
    private:
        int face;
        int suit;
        string facearr[14]={"0","1","2","3","4","5","6","7","8","9","10","King","queen","jack"};
        string suitarr[5]={"xx","spades","hearts","clubs","diamonds"};
};
#endif
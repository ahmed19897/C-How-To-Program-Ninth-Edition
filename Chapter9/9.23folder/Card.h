#include<iostream>
using namespace std;

#ifndef CARD_H
#define CARD_H

class Card
{
    public:
        Card(int =0,int =0);
        ~Card();
        string to_String();
        void setface(int);
        void setsuit(int);
        int getface()const;
        int getsuit()const;


    private:
        int face;
        int suit;
        string facearr[13]={"1","2","3","4","5","6","7","8","9","10","King","queen","jack"};
        string suitarr[4]={"spades","hearts","clubs","diamonds"};



};




#endif
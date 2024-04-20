#include <array>
#include "Card.h"
using namespace std;

#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H


class DeckOfCards
{
    public:
        DeckOfCards();
        ~DeckOfCards();
        void Shuffle();
        void Deal_Card(array<int,5>&,array<int,5>&);
        bool More_Cards();
        void DisplayDeck();
        bool haspair(array<int,5>);
        bool hastwopair(array<int,5>);
        bool threeofakind(array<int,5>);
        bool fourofakind(array<int,5>);
        bool hasflush(array<int,5>);
        bool straight(array<int,5>);
    private:
        array<int,53>deck;
        int currentCard;
        Card card;

        void Swap(int *,int *);
        int decodeface(int);
        int decodesuit(int);
        

};






#endif
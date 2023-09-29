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
        int Deal_Card();
        bool More_Cards();
        void DisplayDeck();


    private:
        array<int,52>deck;
        int currentCard;
        Card card;

        void Swap(int *,int *);
        

};






#endif
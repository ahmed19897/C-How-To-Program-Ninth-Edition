#include "Card.h"
#include "DeckOfCards.h"

int main() 
{   
    DeckOfCards d1;

    d1.DisplayDeck();
    d1.Shuffle();
    cout<<"\n\n";
    d1.DisplayDeck();
    cout<<"\n\n";

    for(int i=0;i<52;i++)
    {
        cout<<d1.Deal_Card()<<endl;
        cout<<d1.More_Cards()<<endl;
    }
    
    

    



	return 1; 
} 
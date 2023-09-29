#include "Card.h"
#include "DeckOfCards.h"

int main() 
{   
    DeckOfCards d1;
    int * ptr;
    array<int,5>myarray;
    array<int,5>myarray2;
    int d1score=0;
    int d2score=0;

    d1.DisplayDeck();
    d1.Shuffle();
    cout<<"\n\n";
    d1.DisplayDeck();
    cout<<"\n\n";


    d1.Deal_Card(myarray,myarray2);
    if(d1.haspair(myarray))
    {
        d1score++;
    }
    if(d1.hastwopair(myarray))
    {
        d1score+=2;
    }
    if(d1.threeofakind(myarray))
    {
        d1score+=3;
    }
    if(d1.fourofakind(myarray))
    {
        d1score+=4;
    }
    if(d1.hasflush(myarray2))
    {
        d1score+=5;
    }
    if(d1.straight(myarray))
    {
        d1score+=6;
    }






    d1.Deal_Card(myarray,myarray2);

    if(d1.haspair(myarray))
    {
        d2score++;
    }
    if(d1.hastwopair(myarray))
    {
        d2score+=2;
    }
    if(d1.threeofakind(myarray))
    {
        d2score+=3;
    }
    if(d1.fourofakind(myarray))
    {
        d2score+=4;
    }
    if(d1.hasflush(myarray2))
    {
        d2score+=5;
    }
    if(d1.straight(myarray))
    {
        d2score+=6;
    }

    if (d1score>d2score)
    {
        cout<<"player 1 is the winner:"<<d1score<<' '<<"to "<<d2score<<endl;
    }
    if (d2score>d1score)
    {
        cout<<"player 2 is the winner:"<<d2score<<' '<<"to "<<d1score<<endl;
    }
    else
        cout<<"Tie is achieved player 1 score is:"<<d1score<<" player 2 score is:"<<d2score<<endl;

	return 1; 
} 
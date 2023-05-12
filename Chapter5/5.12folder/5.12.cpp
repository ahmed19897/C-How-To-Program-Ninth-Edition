#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
    int limita=1;
    int limitb=10;
    int limitc=0;
    int innerlimitc=10;
    int limitd=10;
    int innerlimitd=0;


    for(int j=1;j<10;j++)
    {    
        for(int i=1;i<=limita;i++)
        {
            cout<<'*';
        }
        limita++;
        cout<<endl;
    }

    cout<<'\n'<<endl;

    for(int j=0;j<10;j++)
    {    
        for(int i=1;i<=limitb;i++)
        {
            cout<<'*';
        }
        limitb--;
        cout<<endl;
    }

    cout<<'\n'<<endl;

    for(int j=0;j<=10;j++)
    {    
        for(int i=0;i<=limitc;i++)
        {
            cout<<' ';
        }

        for(int k=1;k<=innerlimitc;k++)
        {
            cout<<'*';
        }

        cout<<endl;
        limitc++;
        innerlimitc--;

    }

    cout<<'\n'<<endl;

     for(int j=0;j<=10;j++)
    {    
        for(int i=0;i<=limitd;i++)
        {
            cout<<' ';
        }

        for(int k=1;k<=innerlimitd;k++)
        {
            cout<<'*';
        }

        cout<<endl;
        limitd--;
        innerlimitd++;

    }

    return 0;
}
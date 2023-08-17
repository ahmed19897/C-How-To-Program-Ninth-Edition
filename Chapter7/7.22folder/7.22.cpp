#include <iostream>
#include <iomanip>
#include <cmath>
#include <array>
#include <algorithm>
using namespace std;
int const moveNumber=8;

array<int,2> WhereIsTheSamllestNumber(array<array<int,moveNumber>,moveNumber>&block);
void AttemptAFullKnightTour(int startRow,int startColumn);


int main()
{
    array<array<int,moveNumber>,moveNumber>block={2,3,4,4,4,4,3,2,
                                                  3,4,6,6,6,6,4,3,
                                                  4,6,8,8,8,8,6,4,
                                                  4,6,8,8,8,8,6,4,
                                                  4,6,8,8,8,8,6,4,
                                                  4,6,8,8,8,8,6,4,
                                                  3,4,6,6,6,6,4,3,
                                                  2,3,4,4,4,4,3,2};
    int greatestoccupied=0,bestRowStart=0,bestColumnStart=0;



    AttemptAFullKnightTour(1,6);//the best start row and column

    return 0;
}







array<int,2> WhereIsTheSamllestNumber(array<array<int,moveNumber>,moveNumber>&block)
{
    array<int,2>index={0};
    int smallestValue=0;

    for(int i=0;i<moveNumber;i++)
    {
        for(int j=0;j<moveNumber;j++)
        {
            if(i==0 && j==0)
            {
                smallestValue=block[i][j];
            }
            if(block[i][j]<smallestValue)
            {
                smallestValue=block[i][j];
                index[0]=i;
                index[1]=j;
            }
        }
    }
    return index;
}



void AttemptAFullKnightTour(int startRow,int startColumn)
{
    array<array<int,moveNumber>,moveNumber>block={2,3,4,4,4,4,3,2,
                                                3,4,6,6,6,6,4,3,
                                                4,6,8,8,8,8,6,4,
                                                4,6,8,8,8,8,6,4,
                                                4,6,8,8,8,8,6,4,
                                                4,6,8,8,8,8,6,4,
                                                3,4,6,6,6,6,4,3,
                                                2,3,4,4,4,4,3,2};
    array <int ,moveNumber>Vertical={2,1,-1,-2,-2,-1,1,2};
    array<int,moveNumber>Horizontal={-1,-2,-2,-1,1,2,2,1};
    int counter=0,currentRow=0,currentColumn=0,rowdifference=0,columndifference=0,currentAccessabilityIndex=8,rowdifferencecurrent=0,columndifferencecurrent=0;
    int occupied=1;
    array<int,2>test;   
    block[currentRow][currentColumn]=10;
                

    currentRow=startRow;
    currentColumn=startColumn;
    while(counter<=pow(moveNumber,2))
    {
//find out where the boxes with the smallest accessability index to try to occupy it first
        test= WhereIsTheSamllestNumber(block);  
//find out where the boxes with the smallest accessability index to try to occupy it first
        for(int i=0;i<8;i++)
        {
//find out the difference between my current position and the box I want to go to 
            rowdifferencecurrent=abs(test[0]-currentRow);
            columndifferencecurrent=abs(test[1]-currentColumn);
//find out the difference between my current position and the box I want to go to

//try a combination of the 8 possible moves and calculate to which row and column this combination will take us
            currentRow+=Vertical[i];
            currentColumn+=Horizontal[i];
//try a combination of the 8 possible moves and calculate to which row and column this combination will take us

//a box out the chessbox bounds so we remove its effect and try a different move in the nex iteration
            if ((currentRow >7 || currentColumn > 7)  ||((currentRow < 0 || currentColumn < 0) ))
            {
                currentRow-=Vertical[i];
                currentColumn-=Horizontal[i];
                continue;
            }
//a box out the chessbox bounds so we remove its effect and try a different move in the nex iteration

//find out the difference between the proposed next move and the box I want to go to 
            rowdifference=abs(test[0]-currentRow);
            columndifference=abs(test[1]-currentColumn);
//find out the difference between the proposed next move and the box I want to go to 

//if the proposed move to the box is closer to  the corner boxes that were never occupied than my current posistion then occupy it
            if((rowdifferencecurrent>rowdifference || columndifferencecurrent>columndifference) && block[currentRow][currentColumn]!=10)
            {
                if (currentRow==test[0] && currentColumn==test[1])
                {
                    block[test[0]][test[1]]=10;
                }
                block[currentRow][currentColumn]=10;  
                occupied++;
            }

            else if ( block[currentRow][currentColumn]!=10)
            {
            block[currentRow][currentColumn]=10;  
            occupied++; 
            }
//if the proposed move to the box is closer to  the corner boxes that were never occupied than my current posistion then occupy it

//a box is in the chessbox bounds but occupied
            else
            {
                currentRow-=Vertical[i];
                currentColumn-=Horizontal[i];
                rowdifference=test[0]+currentRow;
                columndifference=test[1]+currentColumn;
            }
//a box is in the chessbox bounds but occupied
        }
        counter++;
    }

//print out the entire chessboard for the user
    for(auto items:block)
    {
        for(int item : items)
        {
            cout<<setw(10)<<item<<' ';
        }
        cout<<'\n'<<endl;
    }
    cout<<occupied<<endl;
}
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int const memorySize=100;

void Operation_Interpret(const int *memoryinstruction,int *operation,int *operand);
bool Operation_Apply(int *memory,const int *operation,int *operand,int *accumilator,int *currentmemorylocation);


int main()
{

    int accumelator=0;
    int operand=0,operation=0;
    bool terminate=false;

/* loop & add only positive numbers

    int  memory[memorySize]={1006,1007,2006,3007,2108,1108,0,0,0};
    while(memory[6]>=0 && memory[7]>=0)
    {
        for(int i=0;i<memorySize;i++)
        {
            Operation_Interpret(&memory[i],&operation,&operand);
           if (memory[6]<0 || memory[7]<0)
            {
                i=memorySize;
                continue;
            }
            terminate=Operation_Apply(memory,&operation,&operand,&accumelator,&i);
            if (terminate==true)
            {
                i=memorySize;
            }
        }
    }
*/


/*read a series of numbers and display the average
    int  memory[memorySize]={1017,1018,1019,1020,1021,1022,1023,2017,3018,3019,3020,3021,3022,3023,3225,2124,1124,0,0,0,0,0,0,0,0,Numbertoberead};
        for(int i=0;i<memorySize;i++)
        {
            Operation_Interpret(&memory[i],&operation,&operand);
           if (memory[6]<0 || memory[7]<0)
            {
                i=memorySize;
                continue;
            }
            terminate=Operation_Apply(memory,&operation,&operand,&accumelator,&i);
            if (terminate==true)
            {
                i=memorySize;
            }
        }
*/

    return  0;
}



void Operation_Interpret(const int *memoryinstruction,int *operation,int *operand)
{
    *operand=*memoryinstruction%100;
    *operation=*memoryinstruction/100;
}

bool Operation_Apply(int *memory,const int *operation,int *operand,int *accumilator,int *currentmemorylocation)
{
    bool terminate=false;
        switch (*operation)
        {
        case 10://read
            cout<<"enter a number"<<endl;
            cin>>memory[*operand];
        break;

        case 11://write
            cout<<'\n'<<"Program output is :"<<memory[*operand]<<endl;
        break;

        case 20://load
            *accumilator=memory[*operand];
        break;

        case 21://store
            memory[*operand]=*accumilator;
        break;

        case 30://add
            *accumilator+=memory[*operand];
        break;

        case 31://subtract
            *accumilator-=memory[*operand];

        break;

        case 32://divide
            *accumilator/=memory[*operand];
        break;

        case 33://multiply
            *accumilator*=memory[*operand];
        break;


        case 40://branch
            *currentmemorylocation=(*operand)-1;
        break;

        case 41://branchneg
            if(*accumilator<0)
            {
               *currentmemorylocation=(*operand)-1;
            }
        break;

        case 42://branchzero
            if (*accumilator==0)
            {
               *currentmemorylocation=(*operand)-1; 
            }
        break;

        case 43://hault
            for(int i=0;i<memorySize;i++)
            {
                memory[i]=0;
            }
            terminate=true;
        break;

        case 0:
        break;
        
        default:
            cout<<"instruction not recognized"<<endl;
            terminate=true;
            break;
        }

    return terminate;
}
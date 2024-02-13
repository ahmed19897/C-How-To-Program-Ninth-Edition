#include <iomanip>
#include <iostream>

using namespace std;

int findchar(char *intptr,int size,char userchar);

int main()
{    
    char myarray[80];

    cout<<"please enter a string:"<<endl;
    cin.get(myarray,sizeof(myarray),'\n');
    cout<<endl;

    cout<<"the number of chars is : "<<(cin.gcount()-findchar(myarray,sizeof(myarray),' '))<<" Characters"<<endl;
    cout<<setw(cin.gcount()*2)<<myarray<<endl<<endl;

    return 0;
}

int findchar(char *intptr,int size,char userchar)
{
    int result=0;
    for(int i=0;i<size;i++)
    {
        if(intptr[i]==userchar)
        {
            result ++;
        }
    }
    return result;
}
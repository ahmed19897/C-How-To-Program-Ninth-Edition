#include<iostream>
using namespace std;

int main()
{
    int n=8,m=8;

    while (n!=0)
    {
    
        while(m!=0)
        {   
            if(n%2==1)
            {
                cout<<" *";
                cout<<" ";
            }
            else
            {
                cout<<"* ";
                cout<<" ";
            }
            
            m--;
        }
        cout<<endl;
        m=8;
        n--;
    }



    return 0;
}

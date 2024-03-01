#include<iostream>
#include<iomanip>
#include<vector>
#include<iterator>
#include<typeinfo>

using namespace std;


//Palindromes
int main()
{
    vector <int> Myvector={1,5,1,2,1,5,1};

    vector<int>::const_iterator Begining;
    vector<int>::const_reverse_iterator End;
    int stopcomparing=0;

    Begining=Myvector.cbegin();
    End=Myvector.crbegin();


    for(int i=0;i<=(Myvector.size()/2);i++ )
    {
        if(*Begining!=*End)
        {
            cout<<"Not"<<endl;
            exit;
        }
        else
        {
            cout<<"Begin is :"<<*Begining<<"    "<<"End is : "<<*End<<endl;
            Begining++;
            End++;
        }
    }

    return 0;
}
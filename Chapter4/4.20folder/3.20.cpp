#include <iostream>

using namespace std;

int main()
{
    unsigned int passes=0;
    unsigned int failures=0;
    unsigned int studentcounter=1;




    while(studentcounter<=10)
    {
        cout<<"Enter result (1= pass,2 = fail): ";
        int result=0;
        cin>>result;
        if (result==1)
        {
            passes=passes+1;
            studentcounter=studentcounter+1;
        }
        else if (result==2)
        {
            failures=failures+1;
            studentcounter=studentcounter+1;
        }

        cout<<"Passed "<<passes<<"\n Failed "<<failures<<endl;
        if(passes>8)
        {
            cout<<"Bounes to instructo !"<<endl;
        }


        return 0;
    }



}
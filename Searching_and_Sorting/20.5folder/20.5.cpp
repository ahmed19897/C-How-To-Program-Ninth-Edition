#include <iostream>

void swap(int & var1,int & Var2);

int main()
{
    int arr[10]={5,6,7,5,2,1,5,3,4};
    int n=10;

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    return 0;
}

void swap(int & var1,int & var2)
{
    int  temp=var1;
    var1=var2;
    var2=temp;
}
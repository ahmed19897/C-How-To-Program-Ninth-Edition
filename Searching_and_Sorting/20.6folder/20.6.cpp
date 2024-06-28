//bubble sort optimized
#include <iostream>

void swap(int & var1,int & Var2);

int main()
{
    //int arr[10]={5,6,7,5,2,1,5,3,4};
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    
    int n=10;
    bool Swapped=false;

    for (int i = 0; i < n - 1; i++) 
    {
        Swapped=false;

        //j<n-i-1 so we don't iterate over previously sorted elements
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j],arr[j+1]);
                Swapped=true;
            }
        }
        //if no swapes happened in this iteration this means all array is sorted
        if(Swapped==false)
        {
            i=n-1;
        }
    }

    return 0;
}


//swap using references to save memory
void swap(int & var1,int & var2)
{
    int  temp=var1;
    var1=var2;
    var2=temp;
}
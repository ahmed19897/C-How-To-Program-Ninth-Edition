//bucket sorting
#include <iostream>
#include "BucketSort.h"

int main()
{
    int arr[10]={6,50,61,78,54,27,13,52,59,49};
    int arr2[10][10]={{0}};
    int n1=10;




    BucketSort b;

    b.sort(arr,10,arr2);


    

    return 0;
}
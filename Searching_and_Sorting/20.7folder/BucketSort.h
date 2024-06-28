#ifndef BUCKERSORT_H
#define BUCKERSORT_H
    class BucketSort
    {
    private:
        /* data */
    public:
            void sort(int *arr, int n1,int arr2[][10])
            {
                int k=0;
                int rem[3]={10,100,1000};
                
                //repeat the following process for each digit in each number
                for(int w=0;w<3;w++)
                {
                    //fill bucket array
                    for(int i=0;i<n1;i++)
                    {
                        for(int j=0;j<n1;j++)
                        {
                            if(arr2[arr[i]/rem[w]][j]==0)
                            {
                                arr2 [arr[i]/rem[w]] [j]=arr[i];
                                j=n1;
                            }
                        } 
                    }

                    //refill the original array
                    for(int i=0;i<n1;i++)
                    {
                        for(int j=0;j<n1;j++)
                        {
                            if(arr2[i][j]!=0)
                            {
                                arr[k]=arr2[i][j];
                                k++;
                            }  
                        }
                    }

                    //empty the bucket array to reuse
                    for(int i=0;i<n1;i++)
                    {
                        for(int j=0;j<n1;j++)
                        {
                           arr2[i][j]=0; 
                        }
                    }
                    k=0;
                }
            }
    };
#endif
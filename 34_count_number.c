#include <stdio.h>

int count(int *arr , int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
    }
    return count;   
}

int main()
{
    int arr[] = {1,11,111,2,3,-3,5,-6,7,-8,22,24};
    int n = sizeof(arr)/sizeof(int);
    printf("Number of positve integers in array is %d" , count(arr,n));
    return 0;
}
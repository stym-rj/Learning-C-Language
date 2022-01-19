#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    printf("Third element is %d\n" , arr[2]);
    printf("Third element using pointer is %d\n" , *(ptr+2));

    return 0;
}
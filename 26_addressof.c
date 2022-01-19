#include <stdio.h>
int main()
{
    int i = 4;
    int *j = &i;
    printf("Address of i is %u\n" , &i);
    printf("Address of i is %u\n" , j);
    printf("Value of i is %d\n" , i);
    printf("Value of i is %d\n" , *(&i));
    printf("Value of i is %d\n" , *(j));
    return 0;
}
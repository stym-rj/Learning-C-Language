#include <stdio.h>
void sum_average(int *a , int *b)
{
    printf("The sum is %d\n" , (*a)+(*b));
    printf("The average is %d\n" , ((*a)+(*b))/2);
}


int main()
{
    int i = 16;
    int j = 4;
    sum_average(&i,&j);
    return 0;
}
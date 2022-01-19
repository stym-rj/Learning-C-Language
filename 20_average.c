#include <stdio.h>

float avg(int a , int b , int c)
{
    return (a+b+c)/3.0;
}

int main()
{
    int a , b , c;
    printf("Enter three numbers : ");
    scanf("%d %d %d" , &a , &b , &c);
    
    printf("average is %f" , avg(a,b,c));

    return 0;
}
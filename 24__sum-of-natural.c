#include <stdio.h>

int sum(int n)
{
    if (n==1)
    {
        return n;
    }
    
    return n+sum(n-1);
}

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
    printf("%d" , sum(n));
    return 0;
}
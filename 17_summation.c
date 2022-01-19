#include <stdio.h>
int main()
{
    int n = 8;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + (n*i);
    }
    printf("%d" , sum);
    
    return 0;
}
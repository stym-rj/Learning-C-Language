#include <stdio.h>
int main()
{
    int n;
    int factorial = 1;
    printf("Enter the number: ");
    scanf("%d" , &n);

    for (int i = 1; i <= n; i++)
    {
        if (n == 0 || n == 1)
        {
            factorial = 1;
        }
        factorial = factorial*i;
    }
    printf("%d" , factorial);

    return 0;
}
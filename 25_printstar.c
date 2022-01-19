#include <stdio.h>

void printstar(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");  
    }
}

int main()
{
    printstar(5);
    return 0;
}
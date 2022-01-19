#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d" , &n);
    int temp = 0;

    for (int i = 2; i <= (n/2); i++)
    {
        if (n%i==0)
        {
            temp = 1;
            break;
        }
    }
    if (temp == 1)
    {
        printf("Not prime");
    }
    else
    {
        printf("Prime");
    }
    
    return 0;
}
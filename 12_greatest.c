#include <stdio.h>
int main()
{
    int num1 , num2 , num3 , num4 , flag;

    printf("Enter num1 : ");
    scanf("%d" , &num1);
    printf("Enter num2 : ");
    scanf("%d" , &num2);
    printf("Enter num3 : ");
    scanf("%d" , &num3);
    printf("Enter num4 : ");
    scanf("%d" , &num4);

    if (num1>num2 && num1>num3 && num1>num4)
    {
        printf("%d is greatest" , num1);
    }
    else if (num2>num1 && num2>num3 && num2>num4)
    {
        printf("%d is greatest" , num2);
    }
    else if (num3>num2 && num3>num1 && num3>num4)
    {
        printf("%d is greatest" , num3);
    }
    else
    {
        printf("%d is greatest" , num4);
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    float income , tax = 0;
    printf("Enter the Income : ");
    scanf("%f" , &income);

    if (income>=250000 && income<500000)
    {
        tax = 0.05*income;
    }
    else if (income>=500000 && income<1000000)
    {
        tax = 0.20*income;
    }
    else if (income>=1000000)
    {
        tax = 0.30*income;
    }
    else
    {
        printf("No tax\n");
    }

    printf("The tax is : %f" , tax);

    return 0;
}
#include <stdio.h>
float temp(float c)
{
    return ((c*9/5)+32);
}

int main()
{
    float c;
    printf("Enter temp in C: ");
    scanf("%f" , &c);
    printf("Temp in f is %f" , temp(c));
    return 0;
}
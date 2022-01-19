#include <stdio.h>
int main()
{
    float celsius , farhenheit;
    printf("Enter temp in Celsius : ");
    scanf("%f" , &celsius);
    farhenheit = (celsius * 9/5) + 32;
    printf("Temp in farhenheit is %f" , farhenheit);


    return 0;
}
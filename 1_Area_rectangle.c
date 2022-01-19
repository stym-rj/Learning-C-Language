#include <stdio.h>
int main()
{
    int length , breadth;
    printf("Enter length: ");
    scanf("%d" , &length);
    printf("Enter breadth: ");
    scanf("%d" , &breadth);

    printf("The area of rectangle is %d" , length*breadth);
    return 0;
}
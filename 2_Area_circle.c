#include <stdio.h>
#define PI 3.14
int main()
{
    float radius;
    printf("Enter Radius : ");
    scanf("%f" , &radius);
    printf("The Area of Circle is %f" , PI*radius*radius);
    return 0;
}
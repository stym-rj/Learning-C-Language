#include <stdio.h>
#define PI 3.14
int main()
{
    float radius , height;
    printf("Enter radius : ");
    scanf("%f" , &radius);
    printf("Enter height : ");
    scanf("%f" , &height);
    printf("The Volume of cylinder is %f" , PI*radius*radius*height);

    return 0;
}
#include <stdio.h>
#define g 9.8

float force(float mass)
{
    return (mass*g);
}

int main()
{
    float m;
    printf("enter mass: ");
    scanf("%f" , &m);
    printf("force is %f" , force(m));
    return 0;
}
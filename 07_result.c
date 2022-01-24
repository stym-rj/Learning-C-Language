#include <stdio.h>
int main()
{
    int sub1 , sub2 , sub3;
    printf("Enter marks of sub1 : ");
    scanf("%d" , &sub1);
    printf("Enter marks of sub2 : ");
    scanf("%d" , &sub2);
    printf("Enter marks of sub3 : ");
    scanf("%d" , &sub3);

    if (sub1 >=33 && sub2 >=33 && sub3 >=33 && (sub1+sub2+sub3)/3 >=40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}
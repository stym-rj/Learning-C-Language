#include <stdio.h>
int main()
{
    char c;
    printf("Enter the char : ");
    scanf("%c" , &c);
    if (c>=97 && c<=122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("not lowercase");
    }
    
    
    return 0;
}
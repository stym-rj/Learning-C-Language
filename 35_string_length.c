#include <stdio.h>
int length(char str[])
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char str[] = "Rishabh";
    printf("The length of string is %d\n" , length(str));
    return 0;
}
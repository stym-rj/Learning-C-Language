#include <stdio.h>

void slice(char str[] , int m ,int n)
{
    char str2[20];
    int j = 0;
    for (int i = m; i <= n; i++ , j++)
    {
        str2[j] = str[i];
    }
    printf("%s" , str2);
}

int main()
{
    char str[] = "rishabh";
    int m = 2;
    int n = 6;
    slice(str , m , n);
    return 0;
}
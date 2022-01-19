#include <stdio.h>

int tentimes(int *a)
{
    return 10*(*a);
}
int main()
{
    int i = 10;
    int *j = &i;
    int value = tentimes(&i);
    printf("%d" , value);
    return 0;
}
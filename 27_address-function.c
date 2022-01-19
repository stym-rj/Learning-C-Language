#include <stdio.h>

void callbyvalue(int a)
{
    printf("Address using call by value is %u\n", &a);
}
void callbyreference(int *a)
{
    printf("Address using call by reference us %u\n", a);
}

int main()
{
    int i = 4;
    int *j = &i;
    printf("Address inside main is %u\n", &i);
    callbyvalue(i);
    callbyreference(&i);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array = (int*)calloc(6 , sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter value %d : " , i+1);
        scanf("%d" , &array[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n" , array[i]);
    }
    free(array);
    return 0;
}
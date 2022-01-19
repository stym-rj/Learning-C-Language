#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array = (int*)malloc(6*sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter value %d : " , i+1);
        scanf("%d" , &array[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d" , array[i]);
    }
    free(array);
    return 0;
}
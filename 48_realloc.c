#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        *(&array[i]) = 7 * (i + 1);
    }
    printf("Old array : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    array = realloc(array, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        *(array + i) = 7 * (i + 1);
    }
    printf("\nNew ARRAY: \n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", array[i]);
    }
    free(array);

    return 0;
}
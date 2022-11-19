#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

void logic()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int *ptr = (int *)malloc(size * sizeof(int));
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
    quickSort(ptr, 0, size - 1);
    printf("The sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
}
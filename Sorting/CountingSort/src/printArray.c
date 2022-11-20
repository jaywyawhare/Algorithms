#include <stdio.h>
#include "my_functions.h"

void printArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}
#include <stdio.h>
#include "my_functions.h"

void inputArray(int *ptr, int size)
{
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
}
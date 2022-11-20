#include "my_functions.h"

void selectionSort(int *ptr, int size)
{
    int i, j, min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (ptr[j] < ptr[min])
            {
                min = j;
            }
        }
        swap(&ptr[min], &ptr[i]);
    }
}

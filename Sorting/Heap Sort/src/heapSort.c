#include "my_functions.h"

void heapSort(int *ptr, int size)
{
    int i;
    for (i = size / 2 - 1; i >= 0; i--)
    {
        heapify(ptr, size, i);
    }
    for (i = size - 1; i >= 0; i--)
    {
        swap(&ptr[0], &ptr[i]);
        heapify(ptr, i, 0);
    }
}

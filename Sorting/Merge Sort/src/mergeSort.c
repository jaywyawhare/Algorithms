#include "my_functions.h"

void mergeSort(int *ptr, int size)
{
    if (size < 2)
    {
        return;
    }
    int mid = size / 2;
    mergeSort(ptr, mid);
    mergeSort(ptr + mid, size - mid);
    merge(ptr, size, mid);
}

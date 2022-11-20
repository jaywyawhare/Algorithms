#include "my_functions.h"

void heapify(int *ptr, int size, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < size && ptr[left] > ptr[largest])
    {
        largest = left;
    }
    if (right < size && ptr[right] > ptr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(&ptr[i], &ptr[largest]);
        heapify(ptr, size, largest);
    }
}

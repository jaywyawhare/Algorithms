#include <stdlib.h>

void redixSort(int *ptr, int size)
{
    int max = ptr[0];
    for (int i = 1; i < size; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    int *bucket = (int *)calloc(max + 1, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        bucket[ptr[i]]++;
    }
    int j = 0;
    for (int i = 0; i < max + 1; i++)
    {
        while (bucket[i] > 0)
        {
            ptr[j++] = i;
            bucket[i]--;
        }
    }
    free(bucket);
}
#include <stdlib.h>

#include <stdlib.h>
void countSort(int *ptr, int size)
{
    int max = ptr[0];
    for (int i = 1; i < size; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    int *count = (int *)calloc(max + 1, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        count[ptr[i]]++;
    }
    int j = 0;
    for (int i = 0; i < max + 1; i++)
    {
        while (count[i] > 0)
        {
            ptr[j++] = i;
            count[i]--;
        }
    }
    free(count);
}
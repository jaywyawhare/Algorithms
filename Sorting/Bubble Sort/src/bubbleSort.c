#include <stdio.h>
#include "my_functions.h"

void bubbleSort(int *ptr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                swap((ptr + j), (ptr + j + 1));
            }
        }
    }
}

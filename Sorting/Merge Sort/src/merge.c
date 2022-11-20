#include "my_functions.h"

void merge(int *ptr, int size, int mid)
{
    int i, j, k;
    int n1 = mid;
    int n2 = size - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = ptr[i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = ptr[mid + j];
    }
    i = 0;
    j = 0;
    k = 0;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            ptr[k] = L[i];
            i++;
        }
        else
        {
            ptr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        ptr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        ptr[k] = R[j];
        j++;
        k++;
    }
}

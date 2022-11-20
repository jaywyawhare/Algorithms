void quickSort(int *ptr, int size)
{
    int pivot = ptr[size - 1];
    int i = 0, j = 0;
    for (i = 0; i < size - 1; i++)
    {
        if (ptr[i] < pivot)
        {
            swap(&ptr[i], &ptr[j]);
            j++;
        }
    }
    swap(&ptr[j], &ptr[size - 1]);
    if (j > 1)
        quickSort(ptr, j);
    if (size - j - 1 > 1)
        quickSort(ptr + j + 1, size - j - 1);
}
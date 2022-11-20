void insertionSort(int *ptr, int size)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = ptr[i];
        j = i - 1;
        while (j >= 0 && ptr[j] > key)
        {
            ptr[j + 1] = ptr[j];
            j--;
        }
        ptr[j + 1] = key;
    }
}
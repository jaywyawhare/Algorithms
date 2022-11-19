void quickSort(int *arr, int start, int end)
{
    if (start < end)
    {
        int pivot = arr[end];
        int pIndex = start;
        int i, temp;
        for (i = start; i < end; i++)
        {
            if (arr[i] <= pivot)
            {
                temp = arr[i];
                arr[i] = arr[pIndex];
                arr[pIndex] = temp;
                pIndex++;
            }
        }
        temp = arr[pIndex];
        arr[pIndex] = arr[end];
        arr[end] = temp;
        quickSort(arr, start, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }
}

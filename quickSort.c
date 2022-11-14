#include <stdio.h>

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

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    quickSort(arr, 0, n - 1);
    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

void logic()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    inputArray(arr, size);
    printf("The initial Array is: ");
    printArray(arr, size);
    heapSort(arr, size);
    printf("The sorted Array is: ");
    printArray(arr, size);
    free(arr);
}
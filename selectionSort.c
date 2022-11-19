#include <stdio.h>
#include <stdlib.h>
void selectionSort(int *ptr, int size)
{
    printf("%d ", ptr[5]);
    printf("%p ", ptr);
}

int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int *ptr = (int *)malloc(size * (sizeof(int)));
    selectionSort(ptr, size);
    free(ptr);
    return 0;
}
#include <stdio.h>
void swapArray (int[], int, int);
void printArray (int*, int);

int main (void)
{
    int a[5] = {1, 2, 3, 4, 5};
    swapArray (a, 1, 4);
    printArray (a, 5);
    return 0;
}

void swapArray (int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray (int *a, int n)
{
    int i;
    for (i = 0; i < n; i++, a++)
    {
        printf("%d ", *a);
    }
}

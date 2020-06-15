#include <stdio.h>
void minMax(int[], int, int *, int *);

int main(void)
{
    int arr[8] = {5, 6, 102, 201, 2, 1000, 0, 6985};
    int min, max;

    minMax(arr, 8, &min, &max);

    printf("Min: %d, Max: %d\n", min, max);

    return 0;
}

void minMax(
    int array[],
    int size,
    int *min,
    int *max)
{
    *min = array[0];
    *max = array[0];

    for (int i = 1; i < size; i++)
    {
        if (*min > array[i])
            *min = array[i];
        if (*max < array[i])
            *max = array[i];
    }
}
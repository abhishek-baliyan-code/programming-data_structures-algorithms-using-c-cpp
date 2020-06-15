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
    int i;

    if (size % 2 == 0)
    {
        i = 2;    
        if (array[0] < array[1])
        {
            *min = array[0];
            *max = array[1];
        } 
        else
        {
            *min = array[1];
            *max = array[0];
        }
    }
    else
    {
        i = 1;
        *min = array[0];
        *max = array[0];
    }
    
    *min = array[0];
    *max = array[0];

    while (i < size)
    {
        if (array[i] < array[i + 1])
        {
            if (*min > array[i])
                *min = array[i];

            if (*max < array[i + 1])
                *max = array[i + 1];
        }
        else
        {
            if (*min > array[i + 1])
                *min = array[i + 1];

            if (*max < array[i])
                *max = array[i];
        }
        i += 2;
    }
}   


/*           Analysis           

n(odd) = 3(n - 1) / 2
n(even) = 3n / 2 - 2

z


*/

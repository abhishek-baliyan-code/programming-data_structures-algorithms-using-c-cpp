/*     Binary Search      */

#include <stdio.h>
int binarySearch(int[], int, int);

int main(void)
{
    int arr[7] = {5, 8, 10, 50, 55, 98, 354};
    int result;

    int arraySize = sizeof(arr) / sizeof(int);

    result = binarySearch(arr, arraySize, 55);

    printf("%d\n", result);

    return 0;
}

int binarySearch(
    int array[],
    int size,
    int key)
{
    int startIndex = 0,
        endIndex = size - 1,
        midIndex;

    while (!(endIndex < startIndex))
    {
        midIndex = (startIndex + endIndex) / 2;
        if (array[midIndex] == key)
            return midIndex;
        else if (array[midIndex] < key)
            startIndex = midIndex + 1;
        else
            endIndex = midIndex - 1;
    }

    return -1;
}

/*           Analysis           

Best Case - Ω(1)

Average Case - Θ(log N)

Worst Case - O(log N)



*/

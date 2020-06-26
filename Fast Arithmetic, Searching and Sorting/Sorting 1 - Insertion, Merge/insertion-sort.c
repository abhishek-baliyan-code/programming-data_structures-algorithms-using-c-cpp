#include <stdio.h>
void insertionSort(int[], int);

int main(void)
{
    int arr[] = {7, 5, 9, 3, 2, 10, 1, 4};

    insertionSort(arr, 8);

    for (int i = 0; i < 8; ++i)
    {
        printf("%d\n", arr[i]);    
    }

    return 0;
}

void insertionSort(int arr[], int length)
{
    for (int i = 1; i < length; ++i)
    {
        for (int j = i; j >= 1; --j)
        {
            if (arr[j] < arr[j -1])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            } else if (arr[j] >= arr[j - 1])
            {
                break;
            }
        }
    }
}

/*
    Analysis

Best Case = Ω(n)
Worst Case = Θ(n^2)

*/
/*      Ordered Linear Search       */

#include <stdio.h>
int linearSearch (int[], int, int);

int main (void)
{   
    int arr[7] = {5, 8, 10, 50, 55, 98, 354};
    int result;

    result = linearSearch (arr, 7, 8);

    printf("%d\n", result);    

    return 0;
}

int linearSearch (
    int elements[],   
    int size,         
    int key)          
{   
    for (int index = 0; index < size; index++)
    {   
        if (elements[index] > key) return -1; 
        else if (elements[index] == key) return index;
    }

    return -1;
}

/*           Analysis           

https://youtu.be/Tsv7ChQVOXU?t=801

Best Case - Ω(1)

Average Case - Θ(N)

Worst Case - O(N)



*/

/*      Unordered Linear Search       */

#include <stdio.h>
int linearSearch (int[], int, int);

int main (void)
{
    int arr[6] = {8, 7, 10, 3, 68, 102};
    int result;

    result = linearSearch (arr, 6, 68);

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
        if (elements[index] == key)
        {
            return index;
        }
    }
    return -1;

}

/*           Analysis           

https://youtu.be/Tsv7ChQVOXU?t=581

Best Case - Ω(1)

Average Case - Θ(N)

Worst Case - O(N)



*/

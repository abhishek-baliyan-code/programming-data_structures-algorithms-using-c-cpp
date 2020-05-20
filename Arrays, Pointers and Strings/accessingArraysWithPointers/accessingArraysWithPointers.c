#include <stdio.h>

int main(void)
{
    int myArray[] = {1, 96, -3, 314, 52, 74}, *ptr = NULL, i;
    
    // Pointing ptr pointer to first value of the array.
    // It can also be written in this way:- "ptr = myArray" 
    // Because myArray is an pointer.
    ptr = &myArray[0];

    printf("\n\n");

    for (i = 0; i < 6; i++)
    {
        printf("myArray[%d] = %d ", i, myArray[i]);
        // printf("Contents of Address ptr + %d = %d\n", i, *(ptr + i));
        // printf("ptr + %d = %d\n", i, *ptr++);
        printf("ptr + %d = %d\n", i, *(++ptr));
    }
    return 0;
}
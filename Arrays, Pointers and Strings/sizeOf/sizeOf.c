#include <stdio.h>

int main(void)
{
    int int_size, char_size, flt_size;

    int_size = sizeof(int);
    char_size = sizeof(char);
    flt_size = sizeof(float);
    int arr[7] = {5, 8, 10, 50, 55, 98, 354};
    int size = sizeof(arr) / sizeof(int);   // sizeof(arr) = 28, sizeof(int) = 4, 28/4 = 7
    printf("int, char and float sizes are %d, %d, and %d bytes\n", int_size, char_size, flt_size);

    return 0;
}
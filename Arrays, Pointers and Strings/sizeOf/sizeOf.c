#include <stdio.h>

int main(void)
{
    int int_size, char_size, flt_size;

    int_size = sizeof(int);
    char_size = sizeof(char);
    flt_size = sizeof(float);

    printf("int, char and float sizes are %d, %d, and %d bytes\n", int_size, char_size, flt_size);

    return 0;
}
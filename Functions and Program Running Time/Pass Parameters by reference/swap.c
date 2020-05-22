#include <stdio.h>
void swap (int*, int*);

int main (void)
{
    int i = 55, j = 100;

    swap (&i, &j);

    printf ("%d %d\n", i, j);

    return 0;
}

void swap (int *a1, int *b1)
{
    int temp = *a1;
    *a1 = *b1;
    *b1 = temp;    
}

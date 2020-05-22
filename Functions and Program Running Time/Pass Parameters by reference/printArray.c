#include <stdio.h>
void printArr (int[], int);
void printArr2 (int*, int);
void printArr3 (int*, int);

int main (void)
{
    int x[5] = {1, 2, 3, 4, 5};
    int y[] = {10, 20, 30, 40, 50, 60, 70};

    printArr (x, 5);
    printf("\n");
    printArr2 (y, 7);
    printf("\n");
    printArr3 (x, 5);
    printf("\n");

    return 0;
}

void printArr (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void printArr2 (int *a, int n)
{
    int *ptr;
    for (ptr = a; ptr < a + n; ptr++)
    {
        printf("%d ", *ptr);
    }
}

void printArr3 (int *a, int n)
{
    int i;
    for (i = 0; i < n; i++, a++)
    {
        printf("%d ", *a);
    }
}

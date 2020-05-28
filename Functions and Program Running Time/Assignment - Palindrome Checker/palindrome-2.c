#include <stdio.h>
#include <string.h>

void printChars (char*, char*);

int main (void)
{
    char A[100];
    scanf("%s", A);

    char *p, *q;
    int length = strlen(A);

    p = A;
    q = &A[length - 1];

    if (p != q) 
    {
        while (p < q && *p == *q)
        {
            p++;
            q--;
        }

        if (p == A)
        {
            p = NULL;
            q = NULL;
        } 
        else if (p < q)
        {
            q = p - 1;
            p = A;
        }
        else
        {
            p = A;
            q = A + length - 1;
        }
    }



    printChars(p, q);
    return 0;
}

void printChars (char *p, char *q)
{
    if (p == NULL) 
    {
        printf("0\n");
    } 
    else 
    {
        while (p <= q)
        {
            printf("%c", *p);
            p++;
        }
    }
    printf("\n");
}
/*
Comparing Pointers:-

    - If p and q point to the members of same array, 
        then relation like ==, !=, <, >, <=, >=, etc. Work properly.

        - For example, p < q is true if p point to the earlier member of array
        than q does.
    - Pointers can be meaningfully compared for equality or inequality with zero


*/

#include <stdio.h>

int main(void)
{
    int myArray[] = {1, 2, 3, 1}, *p = NULL, *q = NULL;
    
    p = &myArray[0];
    q = &myArray[2];

    if (p < q)
    {
        printf("p < q : true\n");
    }else
    {
        printf("p < q : false\n");
    }

    if (*p < *q)
    {
        printf("*p < *q : true\n");
    }else
    {
        printf("*p < *q : false\n");
    }

    q = &myArray[3];

    if (p == q)
    {
        printf("p == q : true\n");
    }else
    {
        printf("p == q : false\n");
    }

    if (*p == *q)
    {
        printf("*p == *q : true\n");
    }else
    {
        printf("*p == *q : false\n");
    }

    return 0;   
}
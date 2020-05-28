/*
https://youtu.be/R5aeoVLIHRQ?t=431
*/


#include <stdio.h>

int main (void)
{
    int counter,x,n;
    long double value = 1;
    scanf("%d %d", &x, &n);

    for (counter = 0; counter < n; counter++)
    {
        value = value * x;          //  O(n)
    }

    printf("%.0Lf\n", value);

}
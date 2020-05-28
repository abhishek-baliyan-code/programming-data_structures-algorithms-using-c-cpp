/*
https://youtu.be/R5aeoVLIHRQ?t=737

https://youtu.be/R5aeoVLIHRQ?t=1181
*/

#include <stdio.h>
#include <math.h>

int main (void)
{
    int x, n, len, i;
    long double value;

    scanf("%d %d", &x, &n);

    if (n < 0) printf("Power should be positive value");
    else if (n == 0) printf("1\n");
    else if (n == 1) printf("%d\n", x);
    else 
    {
        if (n % 2 != 0)
        {
            len = log10(n - 1)/log10(2);
        } else
        {
            len = log10(n)/log10(2);
        }

        value = x;

        for (i = 0; i < len; i++)
        {
            value = value * value;
        }

        if (n % 2 != 0)
        {
            value = value * x;
        }

        printf("%.0Lf\n", value);

    }

    
    return 0;


}
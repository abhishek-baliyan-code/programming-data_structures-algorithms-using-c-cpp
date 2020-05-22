#include <stdio.h>

int main(void)
{
    // function declaration
    int power(int base, int n);
    
    int base = 10, n = 2, pow;

    pow = power(base, n);

    printf("pow: %d\n", power(base, n));

    return 0;
}

int power(int base, int n) 
{
    int i, p = 1;

    for (i = 1; i <= n; i++)
    {
        p = p * base;
    }

    return p;
}

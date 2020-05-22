#include <stdio.h>
int factorial (int);

int main (void) 
{
    int x = 8;
    printf("The factorial of %d is %d\n", x, factorial(x));
    return 0;    
}

int factorial (int f)
{
    if (f == 1)
    {
        return 1;
    }

    return f * factorial(f - 1);
}
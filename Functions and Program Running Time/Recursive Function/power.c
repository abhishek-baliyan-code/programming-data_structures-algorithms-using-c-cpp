/*
Must watch this video if you can't understand
https://youtu.be/n6wwxVucbF0?t=1747
*/

#include <stdio.h>
int power (int, int);

int main (void)
{
    int x = 2;
    int y = 10;
    printf("%d\n", power (x, y));
    return 0;
}

int power (int base, int n)
{
    int p;
    if (n == 1) return base;
    p = power (base, n/2);
    if (n % 2 == 0) return p * p;
    else return p * p * base;   
}


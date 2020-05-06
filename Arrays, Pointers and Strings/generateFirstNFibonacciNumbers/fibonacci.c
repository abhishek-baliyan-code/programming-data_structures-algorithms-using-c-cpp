/*
Fibonacci Numbers: Every next number is the sum of previous two numbers. 
example = 0, 1, 1, 2, 3, 5, 8
*/
#include <stdio.h>
#define N 10

int main(void)
{
	int i, fibNumArr[N] ={0, 1};
	
	for (i = 2; i < N; i++)
	{
		fibNumArr[i] = fibNumArr[i - 1] + fibNumArr[i - 2];
	}

	for (i = 0; i < N; i++)
	{
		printf("fibonacciNumber[%d]: %d\n", i, fibNumArr[i]);
	}	

	return 0;
}


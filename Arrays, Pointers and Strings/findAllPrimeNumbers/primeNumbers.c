#include <stdio.h>
#include <math.h>
#define N 100

int main(void)
{
	int i, p, isPrime, arrayIndex, primeArray[N];

	primeArray[0] = 2;
	primeArray[1] = 3;

	arrayIndex = 2;
	
	for (p = 5; p < N; p = p + 2)
	{
		isPrime = 1;
		
		for (i = 1; i < arrayIndex; ++i)
		{
			if (p % primeArray[i] == 0)
			{
				isPrime = 0;
				break;
			} else if (primeArray[i] > sqrt(p))
			{
				break;
			}
		}
		
		if (isPrime == 1) 
		{
			primeArray[arrayIndex] = p;
			++arrayIndex;
		}
	}

	printf("All Prime Numbers until %d:\n ", N);

	for (i = 0; i < arrayIndex; ++i)
	{
		printf("%d  ", primeArray[i]);
	}

	return 0;
}
#include <stdio.h>

int main()
{
	// GCD of two positive numbers
	int A, B, temp;

	printf("Enter Two positive values. A & B respectively: ");
	scanf("%d%d", &A, &B);

	while (B != 0)
	{
		temp = A % B;
		A = B;
		B = temp;
	}

	printf("The GCD is: %d", A);
	return 0;
}
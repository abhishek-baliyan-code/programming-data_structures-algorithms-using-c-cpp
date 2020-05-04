/*
Example 1
	Input = 123
	Output = 321
*/
#include <stdio.h>

int main()
{
	int initialValue, reverseValue = 0;

	printf("Enter any positive Integer that you want to reverse: ");
	scanf("%d", &initialValue);

	while (initialValue > 0)
	{
		reverseValue = reverseValue * 10 + (initialValue % 10);
		initialValue /= 10;
	}

	printf("The Reverse Value is %d", reverseValue);
	return 0;

}


/*
Example 1
	Input = 1233
	Processing = 1 + 2 + 3 + 3 = 9
	Output = 9

Example 2
	Input = 1234
	Processing = 1 + 2 + 3 + 4 = 10 => 1 + 0 = 1
	Output = 1
*/
#include <stdio.h>

int main()
{
	int initialValue, totalValue = 0;

	printf("Enter integer value: ");
	scanf("%d", &initialValue);

	while(initialValue != 0)
	{
		totalValue = totalValue + (initialValue % 10);
		initialValue /= 10;

		if ((initialValue == 0) && (totalValue / 10 > 0))
		{
			initialValue = totalValue;
			totalValue = 0;
			// printf("%d\n", initialValue);
		}		
	}

	printf("Digital Root of the Integer is %d\n", totalValue);
	return 0;
}

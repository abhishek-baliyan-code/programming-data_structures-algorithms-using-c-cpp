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

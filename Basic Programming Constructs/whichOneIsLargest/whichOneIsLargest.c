#include <stdio.h>

int main()

{
	int a, b, c;

	printf("Enter the value of a, b, c:\n");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b)
	{
		if(a > c)
		{
			printf("a is the biggest");
		}
		else
		{
			printf("c is the biggest");
		}	
	}
	else if(b > c)
	{
		printf("b is biggest");
	}
	else
	{
		printf("c is biggest");
	}
	return 0;
}
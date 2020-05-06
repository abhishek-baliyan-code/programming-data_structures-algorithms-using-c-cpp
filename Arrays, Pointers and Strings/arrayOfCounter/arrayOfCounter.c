#include <stdio.h>
#define N 10

int main(void)
{
	int i, ratting, rattingCounter[6] = {0,0,0,0,0,0};

	for (i = 0; i < N; ++i)
	{
		printf("Enter your ratting between 1 - 5: ");
		scanf("%d", &ratting);
		if ( ratting < 1 || ratting > 5 )
		{
			printf("Bad response: %d\n", ratting);
		} else
		{
			// rattingCounter[ratting] = (rattingCounter[ratting] > 0) ? (rattingCounter[ratting] + 1) : 1;
			++rattingCounter[ratting];			
		}		
	}

	for (i = 1; i < 6; ++i)
	{
		printf("rattingCounter[%d]: %d\n", i, rattingCounter[i]);
	}	

	return 0;
}
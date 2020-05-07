#include <stdio.h>
#define M 5
#define N 5

int main(void)
{
	int i, j, arr[M][N];

	for (i = 0; i < M; i++) 
	{
		for (j = 0; j < N; j++)
		{
			arr[i][j] = i + j;
		}
	}

	for (i = 0; i < M; i++)
	{
		printf("row %d: ", i);
		for (j = 0; j < N; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
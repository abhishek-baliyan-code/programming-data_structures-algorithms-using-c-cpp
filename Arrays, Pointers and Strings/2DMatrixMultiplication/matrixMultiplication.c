#include <stdio.h>

int main(void)
{
	int matrixA[10][10], matrixB[10][10], matrixC[10][10], rowsA, colsA, rowsB, colsB, rowsC, colsC, i, j, k, temp = 0;

	printf("Enter the number of rows and columns of matrix A. rowA and colA: ");
	scanf("%d %d", &rowsA, &colsA);

	for (i = 0; i < rowsA; i++)
	{
		for (j = 0; j < colsA; j++)
		{
			printf("matrixA[%d][%d]: ", i, j);
			scanf("%d", &matrixA[i][j]);
		}
	}

	// for showing the total input
	printf("\n\tMatrix A\n");
	for (i = 0; i < rowsA; i++)
	{
		printf("row %d:\t", i);
		for (j = 0; j < colsA; j++)
		{
			printf("%d\t", matrixA[i][j]);
		}
		printf("\n");
	}

	printf("Enter the number of rows and columns of matrix B. WARNING 'matrix A' column length must be equal to 'matrix B' rows length. rowB and colB: ");
	// checking for valid inputs.
	
	do
	{
		scanf("%d %d", &rowsB, &colsB);		
	} while (colsA != rowsB);
	
	for (i = 0; i < rowsB; i++)
	{
		for (j = 0; j < colsB; j++)
		{
			printf("matrixB[%d][%d]: ", i, j);
			scanf("%d", &matrixB[i][j]);
		}
	}

	// for showing the total input
	printf("\n\tMatrix B\n");
	for (i = 0; i < rowsB; i++)
	{
		printf("row %d:\t", i);
		for (j = 0; j < colsB; j++)
		{
			printf("%d\t", matrixB[i][j]);
		}
		printf("\n");
	}

	rowsC = rowsA;
	colsC = colsB;

	for (i = 0; i < rowsC; i++)
	{
		for (j = 0; j < colsC; j++)
		{
			matrixC[i][j] = 0;
			for (k = 0; k < colsA; k++)
			{
				matrixC[i][j] += (matrixA[i][k] * matrixB[k][j]);
			}
		}
	}

	// for showing the total input
	printf("\n\tMatrix C\n");
	for (i = 0; i < rowsC; i++)
	{
		printf("row %d:\t", i);
		for (j = 0; j < colsC; j++)
		{
			printf("%d\t", matrixC[i][j]);
		}
		printf("\n");
	}

	return 0;
	
}
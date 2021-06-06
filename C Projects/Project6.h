#include <stdio.h>
#include <stddef.h>
#define SIZE 15
void readSquare(int A[][SIZE], int *d);
void displaySquare(int B[][SIZE], int d);
int ifMsquare(int C[][SIZE], int q);
void printSum(int J[][SIZE], int p);

void readSquare(int C[][SIZE], int *s)
{
	printf("Please enter the dimension of the square (2-15)");
	scanf("%d", s);
	int row, col;
	for (row = 0; row < *s; row++)
	{
		printf("Enter the values for row %d: ", row);
		for (col = 0; col < *s; col++)
		{
			scanf("%d", &C[row][col]);
		}
	}
	return;
}	

void displaySquare(int D[][SIZE], int dim)
{
	int row, col;
	for (row = 0; col < dim; row++)
	{
		for (col = 0; col < dim; col++)
		{
			printf("%d ", D[row][col]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}

int ifMsquare(int E[][SIZE], int q)
{
	int srow, scol, sdia;
	int col, row;
	int mnum = 1;
	sdia = 0;
	for (row = 0; row < q; row++)
	{
		for (col = 0; col < q; col++)
		{
			sdia +=  E[row][col];
		}
	}

	//sum column
	for (row = 0; row < q; row++)
	{
		for (col = 0; col < q; col++)
		{
			scol += E[row][col];
		}
		if (sdia == scol) 
		{
			mnum = 0;
		}	
	}

	//sum row
	for (row = 0; row < q; row++)
	{
		for (col = 0; col < q; col++)
		{
			srow += E[row][col];
		}
		if (sdia == srow) 
		{
			mnum = 0;
		}
	}

	 

	return 0;
}

void printSum(int J[][SIZE], int p)
{
	int sumSquare; 
	int row, col;

	//get some of row values
	sumSquare = 0;
	for (row = 0; row < p; row++)
		sumSquare += J[row][col];
	printf("%d", sumSquare);

	return;
}



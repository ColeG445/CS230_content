#include <stdio.h>
#define ROW 4 //no ; or =
#define COL 5
void setArray(int A[][COL], int r, int c);
void displayArray(int B[][COL], int r, int c);
int sumRow(int C[][COL], int r);

int main(void) 
{
	int test[ROW][COL];
	setArray(test, ROW, COL);
	displayArray(test, ROW, COL);
	int rsum = sumRow(test, 2);
	printf("sum of %d row is equal to %d\n", ROW-1, rsum);
	return 0;
}

void setArray(int A[][COL], int r, int c)
{
	size_t i, j; //zize_t makes it so the number cannot be negative
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			A[i][j] = i * j;
	return;
}

void displayArray(int B[][COL], int r, int c)
{

	size_t i, j;
	for (i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
			printf("%d  ",B[i][j]);
		printf("\n");
	}	
	return;
}
int sumRow(int D[][COL], int r)
{
	size_t j;
	int sum = 0; 
	       for (j = 0; j < COL; j++)
		       sum += D[r][j]; // sum = sum + D[r][j]
	return sum;
}

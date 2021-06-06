#include <stdio.h>
#define ROW 4
#define COL 5
void setInfo(int K[][COL], int y, int x);
void displayInfo(int E[][COL], int k, int c);
int sumCol(int C[][COL], int r);
int sumRow(int D[][COL], int c);
void setInfo(int K[][COL], int y, int x) //cycles through array to set the information given by user
{
	size_t i, j;

	for (i = 0; i < y; i++)
	{
		for (j = 0; j < x; j++)
		{
			K[i][j] = 0;
		}
	}
	return;
}
void displayInfo(int E[][COL],int k, int c)  //displays information stored in array       	
{
	int i, j;
	for (i = 0; i < COL; i++)
		printf("%10d",i);
	printf("\n");
	
	for (i = 0; i < ROW; i++) //this is for rows
	{
		printf("%d", i);
		for (j = 0; i < COL; j++)
		{
			printf("%d",j);
		}
		
		printf("%10d", sumRow(E, i));
		printf("\n");
	}
	
	for (j = 0; j < COL; j++) //this is for columns
		printf("%10d", sumCol(E, j));
	printf("\n");		
	return;
}

int sumCol(int C[][COL], int r) //returns the sum in the columns by using the array and the specific column
{
	size_t i;

	int sum = 0;
	for (i = 0; i < ROW; i++)
       		sum += C[r][i];
	return sum;
}	
int sumRow(int D[][COL], int c) //returns the sum in the rows by using the array and the specific row
{
	size_t j;
	int sum = 0;
	for (j = 0; j < COL; j++)
		sum += D[c][j]; 
	return sum;
}



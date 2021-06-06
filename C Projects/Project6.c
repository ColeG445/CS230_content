//Name: Cole Gunter
//Student ID: 002639506
//Project 6
//Due date: 11/12/1018
#include <stdio.h>
#include "Project6.h"
#define SIZE 15


int main() 
{
	int dimension; //any value between 2 and 15
	int square[SIZE][SIZE];
	readSquare(square, &dimension);
	displaySquare(square, dimension);
	ifMsquare(square, dimension);
	if (ifMsquare(square, dimension) == 0)
	{
		printf("Is a magic square with a constant of: ");
		printSum(square, dimension);
		printf("\n\n");
	}
	else 
	{
		printf("The square is not a magic square");
	}

	return 0;
}




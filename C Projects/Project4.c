//Student Name: Cole Gunter
//Stuednt ID: 002639506
//COURSE: CS 230
//Assignment #: Project 4
//DUE DATE: 10/15/2018
//
//Input: User inputs a value to find the perfect numbers within the range (ex: 1000)
//Output: The program outputs all of the perfect numbers, and the numbers that make them up

#include <stdio.h>
#include "Project4.h"

int main() 
{
	int integer;
	printf("Please enter an integer:");
	scanf("%d", &integer);
	for(int i = 1; i <= integer; i++)
	{
		perfect(i);
	}
	return 0;
}

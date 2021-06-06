#include <stdio.h>
int main (void) 
{
	printf("%4d\n", 123456); //ignores request
	printf("%-4d\n", 12); //left justified
	printf("%4d\n", 12); //right justified
	printf("%3d\n", 123); //normal
	printf("\\ \' \' \" \n"); //by using /, it makes anything usable as a character.
	return 0;
}


#include <stdio.h>

int square(int);

int main() 
{
	int number = 10;

	printf("%d squared: %d\n", number, square(number));
	return 0;
}

int square(int num)
{
	int sq = num * num;
	return sq; //return num * num;
}

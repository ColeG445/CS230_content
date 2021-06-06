#include <stdio.h>
#include <math.h>
#include "square.h"

int main(void) 
{
	int number = 125;
	printf("%d square using math library: %f\n", number, pow(number, 2));
	printf("%d square using our header file: %d\n", number, square(number));
	int sq = square(number);
	printf("%d square root : %f \n", number , sqrt(sq));
	return 0;
}

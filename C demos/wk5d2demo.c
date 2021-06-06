//user input - number - display - +ve,-ve, zero
#include <stdio.h>
int main() 
{
	int i;
	printf("Please provide an integer:");
	scanf("%d", &i);
	printf("The number %d is ", i);
	(i > 0) ? printf("Positive") : (i < 0)
		? printf("Negative") : printf("Neutral");
	printf(".\n");
	return 0;
}

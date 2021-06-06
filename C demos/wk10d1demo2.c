#include <stdio.h>
void getInput(int *x); //prototype; int *
int main()
{
	int m = 0;
	getInput(&m);
	printf("The number of classes: %d\n", m);
	return 0;
}
void getInput(int *k)
{
	printf("Please enter the number of classes you have this semester: " );
	scanf("%i", k);

	return;
}

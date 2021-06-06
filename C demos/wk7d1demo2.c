#include <stdio.h>
void swap(int a, int b); //prototype

int main(void)
{
	int x = 5;
	int y = 6;

	printf("x = %d y = %d\n", x, y);
	swap(x, y);
	printf("x = %d y = %d\n", x, y);
	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}

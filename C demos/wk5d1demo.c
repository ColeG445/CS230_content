#include <stdio.h>
int main() 
{
	int temp;
	int d1, d2, d4,d5;
	printf("Enter a five-digit number: "); //get number
	int number;
	scanf("%d", &number);
	temp = number;

	d1 = temp / 10000;
	temp = temp % 10000;
	d2 = temp / 1000;
	temp = number % 100;
	d4 = temp / 10;
	d5 = number % 10;

	if (d1 == d5)
	{
		if (d2 == d4)
			printf("%d is a palindrome\n", number);
		else
			printf("%d is NOT a palindrome\n", number);
	}
	else 
		printf("%d is NOT a palindrome\n", number);
	return 0;
}

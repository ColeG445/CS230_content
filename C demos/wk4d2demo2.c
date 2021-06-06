#include <stdio.h>
//Calculate total bill after discount
//if >100, 10% discount
int main (void) 
{
	float amount;
	float discount;
	float total;

	printf("Please enter the sales amount:");
	scanf("%f", &amount);
	//if (amount > 100)
	//{
	//	discount = .10;
	//}
	//else
	//{
	//	discount = 0.0;
	//}
	discount = amount > 100 ? 0.1 : 0.0;
	total = amount - amount * discount;
	printf("Your total bill after discount is%8.2f:\n", total);
	return 0;
}

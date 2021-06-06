#include <stdio.h>
int main()
{
	int sum = 0;
	int num = 6; 

	for (int i = 1; i < num; i++)
	{
		if(num %i == 0)
		{
			sum += i;
		}
	}

	if (sum == num)
	{
		printf("Perfect");
	}
	else
	{
		printf("Not perfect");
	}
	return 0;
}


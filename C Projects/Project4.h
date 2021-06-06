#include <stdio.h>
int perfect(int integer)
{
	int sum = 0;
	int num = integer;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}

	if (sum == num)
	{
		for (int k = 1; k < num; k++)
		{
			if (num % k ==0)
			{
				printf("%d ", k);
			}
		}
	printf("= %d\n", num);	
	}
	
	return 0;
}

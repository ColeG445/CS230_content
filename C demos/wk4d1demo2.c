#include <stdio.h>
int main (void)
{
	int d1;
	int m1;
	int y1;

	printf("Enter date-dd/mm/yyyy:");
	scanf("%d/%d/%d", &d1, &m1, &y1);
	printf("Date you entered was: %d %d %d\n", d1, m1, y1);
	return 0;
}

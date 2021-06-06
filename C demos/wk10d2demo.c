#include <stdio.h>

int main()
{
	int A[] = {10, 20, 30, 50, 50};
	int *iptr = A; // = &A[0]
	size_t i = 0;
	for (i = 0; i < 5; i++)
		printf("%d ",A[i]);
	printf("\n");
	//pointer offset notation using array name A
	for (i = 0; i < 5; i++)
		printf("%d ", *(A + i));
	printf("\n");
	//pointer subscript notation
	for (i = 0; i < 5; i++)
		printf("%d ", iptr[i]);
	printf("\n");
	//pointer offset notation using iptr
	for (i = 0; i < 5; i++)
		printf("%d ", *(iptr + i));
	printf("\n");
	return 0;
}

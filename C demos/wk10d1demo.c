#include <stdio.h>
int main() 
{
	int y = 15;
	double x = 1.0;
	int *iptr = NULL;
	iptr = &y;
	double *dptr = &x;
	printf("The address of y %p; the address of yptr %p\n", &y, iptr);
	printf("The address of x %p; the address of dprt %p\n", &x, dptr);
	printf("The value stored in y is: %d\n", y);
	printf("The value stored in the location pointed bydptr %d\n", *iptr); //dereferencing
	printf("The value stored in x is %f\n", x);
	printf("The values stored in the location pointed by dptr %f\n", *dptr);

	//& * - complements each other
	printf("\n\nShowing that * and & are complements of each other\n &*iptr = %p \n *&iptr = %p\n", &*iptr, *&iptr);
	return 0;
}

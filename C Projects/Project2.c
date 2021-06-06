#include <stdio.h> 
int main() 
{
	float r;
	float pi = 3.1415;
	float v;

	printf("Please enter the radius of the sphere(any number greater than zero, x.dd): ");
	scanf("%f", &r);
	v = (4*pi*(r*r*r))/3;
	
	printf("%10s %10s %10s\n","Radius"," ", "Volume");
	printf("%10s %10s %10s\n","----------" , " " , "----------");
	printf("%10.4f %10s %10.4f\n", r," ",v);
	return 0;

}

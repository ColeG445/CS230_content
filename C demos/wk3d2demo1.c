
//our program demo with scanf input function
#include <stdio.h>
int main(void)
{
	int id; //studen id number
	int num_classes; //number of classes you take in fall 2018
	float gpa; //your current grade point average
	char s_m; //status

	printf("Please enter your id number: ");
	scanf("%d", &id);
	printf("Please enter your number of classes you take in fall 2018: ");
	scanf("%d", &num_classes);
	printf("Please enter your GPA, up to two decimal places: ");
	scanf("%f", &gpa);
	printf("Please enter 's' for single or 'm' for married: ");
	scanf(" %c", &s_m);
	
	
	// output user input
	printf("Your ID number is: %d\n", id);
	printf("Your number of classes for Fall 2018 is: %d\n", num_classes);
	printf("your GPA is: %f\n", gpa);
	printf("your marital status is: %c\n", s_m);
	printf("YEEEEEEEEEEEEEEET");
	return 0;	
}


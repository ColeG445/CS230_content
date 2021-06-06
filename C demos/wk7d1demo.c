#include <stdio.h>
float weekly_salary(float x, float y); //prototype, pass by value
void get_info(float *x, float *y);     //prototype, pass by reference
int main(void) 
{
	
	/*printf("Please enter number of hours you worked last week:");
	float hours;
	scanf("%f", &hours);
	printf("Please enter the hourly salary:");
	float salary;
	scanf("%f", &salary);*/
	float total_salary;
	float hours;
	float salary;
	get_info(&hours, &salary);//pass by reference
	total_salary = weekly_salary(hours, salary);
	printf("hours: %8.2f salary: %8.2f\n", hours, salary);
	printf("Your weekly salary is %10.2f:\n", total_salary);
	return 0;
}
// calculate weekly salary
float weekly_salary(float hours2, float salary2)
{
	//return hours2 * salary2; either of these operations work, its just personal preference
	float temp;
	temp = hours2 * salary2;
	hours2 = 28 ; //this is the example of passing by value
	printf("hours2: %8.2f\n", hours2);
	return temp;
}

void get_info(float *h, float *s)
{
	printf("Please enter the number of hours you worked:");
	scanf("%f", h);
	printf("Please enter the hourly salary:");
	scanf("%f", s);
	return;
}

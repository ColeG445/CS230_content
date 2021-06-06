//array demo ( a series of memory slots with the same data type)
#include <stdio.h>
#define SIZE 5   //no ; or =
void displayArray(int deezNuts[], int s); //prototype function
void getInput(int c[], int s);
int main(void)
{
	int id, k;
	int score[2]= {200, 300};

	int test[SIZE] = {10};
	/*for (int i = 0; i < 3; i++)
		printf("%d ", test[i]);
	printf("\n");
	for (int i = 0; i < 2; i++)
		printf("%d ", score[i]);
	printf("\n");*/
	getInput(test, SIZE);
	displayArray(test, SIZE);
	displayArray(score, 2);
	return 0;
}

void displayArray(int dissPP[], int size) //function definition
{

	for (int j = 0; j < size; j++)
		printf("%d ", dissPP[j]);
	printf("\n");
	return;
}

void getInput(int C[], int s)
{
	for (int k = 0; k < s; k++)
	{
		printf("PLease enter 5 integers:");
		scanf("%d", &C[k]);  //C + k
	}
	return;
}

#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	float salary = 200;
	float sells_in_dollars = 0;

	while (1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &sells_in_dollars);
		if (sells_in_dollars == -1)break;
		printf("Salary is %.2f\n", salary + 0.09*sells_in_dollars );
		printf("\n");
	}
	system("pause");
	return 0;
}
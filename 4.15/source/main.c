#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float amount;
	float principle = 5000;
	float rate;
	int year;
	for (rate = 0.1; rate <= 0.121; rate = rate + 0.005)
	{
		printf("Year         Amount on deposit");
		printf(" %.1f", rate * 100);
		printf("¢H\n");
		for (year = 1; year <= 15; year++)
		{
			amount = principle*(1 + rate);
			printf("%d		%.6f\n", year,amount);
			principle = amount;
		}
		principle = 5000;
		printf("\n");
	}

	system("pause");
	return 0;
}
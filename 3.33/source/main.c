#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, breadth,a,b;
	printf("Enter the length:");
	scanf_s("%d", &length);
	printf("Enter the breadth:");
	scanf_s("%d", &breadth);
	for (a = 0; a < breadth; a++)
	{
		printf("*");
	}
	printf("\n");
	for (a = 0; a < length-2; a++)
	{
		printf("*");
		for (b = 0; b < breadth - 2; b++)
		printf(" ");
		printf("*\n");
	}
	for (a = 0; a < breadth; a++)
	{
		printf("*");
	}
	printf("\n");
	system("pause");
	return 0;
}
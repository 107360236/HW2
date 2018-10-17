#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a, b, c, e;
	for (a = 5; a > 0; a--)
	{
		for (b = 1; b < a; b++)
		{
			printf(" ");
		}
		c = (-2)*a + 11;
		for (e = 0; e < c; e++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (a = 4; a>0; a--)
	{
		for (b = 5; b > a; b--)
		{
			printf(" ");
		}
		c = 2 * a - 1;
		for (e = 0; e < c; e++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
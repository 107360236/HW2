#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	while (1)
	{
		int a ;
		printf("�п�J�N�X(-1 to 4): ");
		scanf_s("%d", &a);
		if (a == -1)break;
		float salary, hours, sum ;
		switch (a)
		{
		case 1:
			printf("�п�J�T�w�g�~: ");
			scanf_s("%f", &salary);
			printf("�g�~��$%2f", salary);
			break;
		case 2:
			printf("�п�J���~: ");
			scanf_s("%f", &salary);
			printf("�п�J�ɼ�: ");
			scanf_s("%f", &hours);
			if (hours > 40)
			{
				sum = 40 * salary + 1.5*(hours - 40)*salary;
			}
			else
			{
				sum = salary*hours;
			}

			printf("�g�~��$%.2f", sum);
			break;
		case 3:
			printf("�п�J��g�P����B: ");
			scanf_s("%f", &salary);
			printf("�g�~��$%.2f", salary*0.057 + 250);
			break;
		case 4:
			printf("�п�J�Ͳ��X��: ");
			scanf_s("%f", &sum);
			printf("�п�J���S��: ");
			scanf_s("%f", &salary);
			printf("�g�~��$%.2f", sum*salary);
			break;
		default:
			printf("Don't have this code.\n");
			break;
		}
		printf("\n\n");
	}
	system("pause");
	return 0;
}
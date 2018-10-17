#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	while (1)
	{
		int a ;
		printf("請輸入代碼(-1 to 4): ");
		scanf_s("%d", &a);
		if (a == -1)break;
		float salary, hours, sum ;
		switch (a)
		{
		case 1:
			printf("請輸入固定週薪: ");
			scanf_s("%f", &salary);
			printf("週薪為$%2f", salary);
			break;
		case 2:
			printf("請輸入時薪: ");
			scanf_s("%f", &salary);
			printf("請輸入時數: ");
			scanf_s("%f", &hours);
			if (hours > 40)
			{
				sum = 40 * salary + 1.5*(hours - 40)*salary;
			}
			else
			{
				sum = salary*hours;
			}

			printf("週薪為$%.2f", sum);
			break;
		case 3:
			printf("請輸入當週銷售金額: ");
			scanf_s("%f", &salary);
			printf("週薪為$%.2f", salary*0.057 + 250);
			break;
		case 4:
			printf("請輸入生產幾件: ");
			scanf_s("%f", &sum);
			printf("請輸入單件酬勞: ");
			scanf_s("%f", &salary);
			printf("週薪為$%.2f", sum*salary);
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
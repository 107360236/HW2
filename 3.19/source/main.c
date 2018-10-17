#include<stdio.h>
#include<stdlib.h>


int main(void){
	float loan;
	float interest_rate, interest;
	int day;
	
	while (1)
	{
		printf("Enter loan principle (-1 to end):");
		scanf_s("%f", &loan);
		printf("Enter interest rate:");
		scanf_s("%f", &interest_rate);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &day);
		interest = loan*interest_rate*day / 365;
		printf("The interest charge is %.2f\n",interest);
	}
	system("pause");
	return 0;
}
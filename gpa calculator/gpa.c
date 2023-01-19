#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gpacalculate();
int main()
{
	int courseque;
	float calculation;
	printf("How many course:");
	scanf("%d", &courseque);
	calculation=gpacalculate(courseque);
	
	
	printf("your All final gpa is %f", calculation);
	return 0;
}
int gpacalculate(int courseque)
{
	int number[100];
	int cradithour[100];
	int sum = 0;
	float calculation;
	int multi = 0;
	float sum1 = 0;
	char coursename[100];
	for (int i = 0; i < courseque; i++)
	{
		printf("Enter course %d name:", i + 1);
		scanf("%s", &coursename[i]);
		printf("Enter course %d number:", i + 1);
		scanf("%d", &number[i]);
		printf("Enter course %d cradithour:", i + 1);
		scanf("%d", &cradithour[i]);
		sum = sum + cradithour[i];
		if (number[i] >= 85 && number[i] <= 100)
		{
			printf("your %d subject gpa is 4.0\n", i + 1);
			multi = cradithour[i] * 4.0;
			sum1 += multi;

		}
		else if (number[i] >= 80 && number[i] <= 84)
		{
			printf("your %d subject gpa is 3.70\n", i + 1);
			multi = cradithour[i] * 3.70;
			sum1 += multi;
		}
		else if (number[i] >= 75 && number[i] <= 79)
		{
			printf("your %d subject gpa is 3.30\n", i + 1);
			multi = cradithour[i] * 3.30;
			sum1 += multi;
		}
		else if (number[i] >= 70 && number[i] <= 74)
		{
			printf("your %d subject gpa is 3.00\n", i + 1);
			multi = cradithour[i] * 3.00;
			sum1 += multi;
		}
		else if (number[i] >= 65 && number[i] <= 64)
		{
			printf("your %d subject gpa is 2.70\n", i + 1);
			multi = cradithour[i] * 2.70;
			sum1 += multi;
		}
		else if (number[i] >= 61 && number[i] >= 64)
		{
			printf("your %d subject gpa is 2.30\n", i + 1);
			multi = cradithour[i] * 2.30;
			sum1 += multi;
		}
		else if (number[i] >= 58 && number[i] >= 60)
		{
			printf("your %d subject gpa is 2.00\n", i + 1);
			multi = cradithour[i] * 2.00;
			sum1 += multi;
		}
		else if (number[i] >= 55 && number[i] >= 57)
		{
			printf("your %d subject gpa is 1.70\n", i + 1);
			multi = cradithour[i] * 1.70;
			sum1 += multi;
		}
		else if (number[i] >= 50 && number[i] >= 54)
		{
			printf("your %d subject gpa is 1.00\n", i + 1);
			multi = cradithour[i] * 1.00;
			sum1 += multi;
		}
		else
		{
			printf("fail");
		}
	}
	calculation = sum1 / sum;
	return calculation;
}
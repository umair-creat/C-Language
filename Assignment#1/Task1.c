#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1, num2, sum = 0;
	do
	{
		printf("Enter your first number:");
		scanf("%d", &num1);
		if (num1 < 0)
		{
			printf("invalid input.\n");
			printf("Try again\n");
		}
	} while (num1 < 0);
	do
	{
		printf("Enter your 2nd number:");
		scanf("%d", &num2);
		if (num2 < 0)
		{
			printf("invalid input.\n");
			printf("Try again\n");
		}
	} while (num2 < 0);
	for (int i = 1; i <= num2; i++)
	{
		sum = sum + num1;
	}
	printf("product is:%d", sum);
	return 0;
}
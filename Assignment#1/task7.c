#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1, num2,max,lcm;
	do {
		printf("Enter first number:");
		scanf("%d", &num1);
		if (num1 < 0)
		{
			printf("invalid number.\n");
			printf("Try again.\n");
		}
	} while (num1 < 0);
	do
	{
		printf("Enter your second number:");
		scanf("%d", &num2);
		if (num2 < 0)
		{
			printf("invalid number.\n");
			printf("Try again.\n");
		}
	} while (num2 < 0);
	if (num1 > num2)
	{
		max = num1;
	}
	if (num2 > num1)
	{
		max = num2;
	}
	while (1)
	{
		if (max % num1 == 0 && max % num2 == 0)
		{
			lcm = max;
			printf("%d", lcm);
			break;
		}
		max++;
	}
	
	return 0;
}

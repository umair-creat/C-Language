#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1=0,counter=0;
	do{
		printf("Enter your number:");
		scanf("%d", &num1);
		if (num1 < 0)
		{
			printf("invalid value.\n");
			printf("Try again.\n");
		}
	} while (num1 < 0);
	for (int a = 2; a <= num1 / 2; a++)
	{
		if (num1 % a == 0)
		{
			counter=0;

		}
		else
		{
			counter = 1;
		}
	}
	if (counter == 1)
	{
		printf(" %d prime number.",num1);
	}
	else
	{
		printf(" %d not prime number.",num1);
	}
	return 0;
}
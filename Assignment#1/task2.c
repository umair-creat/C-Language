#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int divisor;
	int answer=0;
	int dividend;
	int num = 0;
	do {
		do
		{
			printf("Enter dividend:");
			scanf_s("%d", &dividend);
			if (dividend < 0)
			{
				printf("invalid input");
				printf("Try again");
			}
		} while (dividend < 0);
		do
		{

			printf("Enter divisor:");
			scanf_s("%d", &divisor);
			if (divisor < 0)
			{
				printf("invalid input");
				printf("Try again");
			}

		} while (divisor < 0);
		if (divisor <= dividend)
		{
			for (int i = 1; dividend >= divisor; i++)
			{
				dividend = dividend - divisor;
				answer++;
				num = 6;
			}
			printf("quotient:%d\n", answer);
			printf("Riminder:%d\n", dividend);
		}
		else if (divisor >= dividend)
		{
			num = num;
		}
		
	} while (num<5);
	
	return 0;
}
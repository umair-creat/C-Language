#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

	int num1, num2;
	int count = 0;
	printf("number1:");
	scanf("%d", &num1);
	printf("number2:");
	scanf("%d", &num2);
	for (int i = num1; i <= num2 - count; i++)
	{
		for (int a = i; a <= num2 - count; a++)
		{
			printf("(%d,%d) ", i, a);
		}
		count = count + 1;
		printf("\n");
	}
	return 0;
}
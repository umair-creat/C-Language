#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
int main()
{
	int num1;
	printf("Enter hight:");
	scanf_s("%d", &num1);    ///for get value from user
	for (int i = 1; i <= num1; i++)
	{
		for (int a = 1; a <= num1; a++)
		{
			printf("%d\t", i * a);         //in this line i is multiply by a like 1*2=2
		}
		printf("\n");   //next line
	}
	return 0;
}
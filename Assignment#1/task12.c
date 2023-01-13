#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int row,i=1,sequence=0,star=1;
	printf("Enter ROws to print:");
	scanf("%d", &row);
	sequence = row - 1;
	for (i = 1; i < row * 2; i++)
	{
		for (int j = 1; j <= sequence; j++)
		{
			printf(" ");
		}
		for (int a = 1; a < star * 2; a++)
		{
			printf("*");
		}
		printf("\n");
		if (i < row)
		{
			sequence--;
			star++;
		}
		else
		{
			sequence++;
			star--;
		}
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int valid(int n)
{                     //To check number is valid or non valid
	while (n < 2)
	{
		printf("invalid number.\nEnter again number:");

		scanf("%d", n);
	}
	return n;

}
void check(int num)
{
	for (int i = 1; i <= num; i++)  //outer  loop is to print rows
	{
		for (int a = 1; a <= num; a++)  //inner loop is to print coloum
		{
			if (i <= a)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}

}
int main()
{
	int row;
	printf("Enter number of rows :");
	scanf("%d", &row);     //get a value from user
	valid(row);
	check(row);
	return 0;
}

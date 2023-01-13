
#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
int main()
{
	int row= 0, col = 0;
	int sum1 = 1;
	printf("Enter rows:");
	scanf_s("%d", &row);        //get row  from  user
	printf("Enter colum:");
	scanf_s("%d", &col);        //get coloum from user
	for (int i = 1; i <= row; i++)
	{
		for (int a = 1; a <= col; a++)
		{
			if (i % 2 != 0 || a % 2 != 0)
			{
				printf("+");       //if condition  true
			}
			else
			{
				printf(" ");    //if condition false
			}
		}
		printf("\n");   //next line
	}
	return 0;
}
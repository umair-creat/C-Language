//Write a c program which prints a hollow rectangle after taking its hight and width from the user.
#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
int main()
{
	int hight = 0, width = 0;
	printf("Enter hight:");
	scanf_s("%d", &hight);        //get hight from  user
	printf("Enter width:");
	scanf_s("%d", &width);        //get width from user
	for (int i = 1; i <= hight; i++)
	{
		for (int a = 1; a <= width; a++)
		{
			if (i == 1 || i == hight || a == 1 || a == width)   //check condition
			{
				printf("*");       //if condition  true
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
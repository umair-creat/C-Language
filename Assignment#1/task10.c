#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1=0, num2=0, num3=0,num4=0,ending=0;
	int count=0;
	printf("Enter first number of series 1:");
	scanf("%d", &num1);
	printf("Enter the difference of series 1:");
	scanf("%d", &num2);
	printf("Enter the first number of series 2:");
	scanf("%d", &num3);
	printf("Enter number from the series 1:");
	scanf("%d",&num4);
	for(int i=num1;i<=num4;i=i+num2)
	{
		count++;
		if(i==num4)
		{
			break;
		}
		
	}
	for(int a=1;1;a++)
	{
		
		if(a==count)
		{
			printf("Your corresponding number is %d.",num3);
			break;
	
		}
		num3++;
		
	}
	
	return 0;
}
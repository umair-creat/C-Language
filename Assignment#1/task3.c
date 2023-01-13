#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1=0, reminder1 = 0, num2, reminder2=0, sum1= 0,sum2=0;
	int number1,number2;
	do {
		printf("Enter your first number:");
		scanf_s("%d", &number1);
		if (number1 < 0)
		{
			printf("invalid value\n");
			printf("Try again\n");
		}
		sum1 = sum1 + 1;
	} while (number1 < 0);
	do {
		printf("Enter your second number:");
		scanf_s("%d", &number2);
		if (number2 < 0)
		{
			printf("invalid number\n");
			printf("Try again.\n");
		}
	} while (number2 < 0);
	num1=number1;
	num2=number2;
	int rem=0,sum3=0,divider=0,answer=1;
	while ( num1!=0||num2!=0||rem!=0)
	{
		
		reminder1 = num1 % 10;
		reminder2=num2%10;
		num1=num1/10;
		num2=num2/ 10;
     sum2 = reminder1 + reminder2+rem;
     rem=0;
if(sum2>9)
{
	rem=sum2/10;
	sum2%=10;
}
		divider=divider+(sum2*answer);
		answer=10*answer;
	}
	         printf("\t%d\n",number1);
		printf("+\t%d\n",number2);
		printf("-------------\n");
		printf("\t%d",divider);	 
	return 0;
}
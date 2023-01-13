
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{	
	int  num1, num2;
     int reminder1, reminder2;
	int  sum = 0; int add=0;
	int carry=0;
	int digit=0;
	 int digit1=0;
	int i = 1;
	printf("enter the first binary no :");
	scanf("%d", &num1);
	printf("enter the second binary no :");
	scanf("%d", &num2);
	digit=num1;
	digit1=num2;
	while (num1 > 0 || num2 > 0 || carry != 0)
	{
		reminder1 = num1 % 10;
		reminder2 = num2 % 10;
		num1 = num1 / 10;
		num2 = num2 / 10;
		sum = reminder1 + reminder2+carry;
		if (sum == 0)
		{
			sum = 0;
			carry = 0;
		}
		else if (sum == 1)
		{
			sum = 1;
			carry = 0;
		}
		else if (sum == 2)
		{
			sum = 0;
			carry = 1;
		}else if(sum==3)
		{	sum = 1;
			carry = 1;
		}
		sum = add + (sum * i);
		add = sum;
		i = i * 10;
	}
		printf("    %d\n", digit);
	printf("+   %d\n", digit1);
 	printf("-----------\n");
 	printf("    %d", sum);
	return 0;
}
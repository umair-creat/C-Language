#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isValid(int num1, int num2)
{
	if (num1 < num2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
double getSales(double value)
{
	do
	{
		printf("Please enter the sale of the quater in $: ");
		scanf("%lf", &value);
	} while (isValid(value, 0) == 0);
	return value;
}
void findHighest(double value1, double value2, double value3, double value4)
{
	if (value1 > value2 && value1 > value3 && value1 > value4)
	{
		printf("The Highest Grossing division is of 4th division and it's Quater is %.2lf which is largest with %.2lf $ Sales .", (value1 / 4), value1);
	}
	else if (value2 > value1 && value2 > value3 && value2 > value4)
	{
		printf("The Highest Grossing division is of 3rd divvision and it's Quater is %.2lf which is largest with %.2lf $ Sales.", (value2 / 4), value2);
	}
	else if (value3 > value1 && value3 > value2 && value3 > value4)
	{
		printf("The Highest Grossing division is of 2nd division and it's Quater is %.2lf which is largest with %.2lf $ Sales .", (value3 / 4, value3));
	}
	else if (value4 > value1 && value4 > value2 && value4 > value3)
	{
		printf("The Highest Grossing division is of 1st division and its Quater is %.2lf which is largest with %.2lf $ Sales .", (value4 / 4), value4);
	}
}
int main()
{
	double quad1 = 0, quad2 = 0, quad3 = 0, quad4 = 0;
	findHighest(getSales(quad1), getSales(quad2), getSales(quad3), getSales(quad4));
}
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
double isvalid(double num)
{
	if (num < 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
float futureValue(double p, double i, int m)
{
	float F = 0;
	float n = 1 + i;
	float l = pow(n, m);  //pow means raise to power
	F = l * p;
	return F;
}
int main() {
	int month = 0;
	float present = 0, intrest = 0, total = 0;
	do
	{
	printf("Enter the present value of amount: ");
	scanf("%f", &present);
    }while(isvalid(present)==0);
    do
    {
	printf("Enter the intrest rate of amount: ");
	scanf("%f", &intrest);
    }while(isvalid(intrest)==0);
    do
    {
	printf("Enter the number of months : ");
	scanf("%d", &month);
    }while(isvalid(month)==0);
	total = futureValue(present, intrest/100, month); //Run function
	printf("The future value is %.2f", total);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
int  compares(char array1[], char array2[])
{
	if (*array1 == *array2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char array1[SIZE];
	char array2[SIZE];
	int compare;
	printf("Enter the character of array 1=");
	scanf("%s", array1);
	printf("Enter the characters of array 2=");
	scanf("%s", array2);
	printf("The array one is=%s\n", array1);
	printf("The array two is =%s\n", array2);
	compare = compares(array1, array2);
	if (compare == 1)
	{
		printf("The are same !!!!\n");
	}
	else
	{
		printf("They are not same!!!\n");
	}
	printf("The Comparison of arrays are=%s\n", compare);
	return 0;

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
int main()
{

	char arr1[SIZE];
	char arr2[SIZE];
	char arr3[SIZE];
	char arr4[SIZE];
	float sum;




	printf("Enter string 1 of float type: ");
	fgets(arr1, 50, stdin);


	printf("Enter string 2 of float type: ");
	fgets(arr2, 50, stdin);


	printf("Enter string 3 of float type : ");
	fgets(arr3, 50, stdin);


	printf("Enter string 4 of float type : ");
	fgets(arr4, 50, stdin);


	sum = atof(arr1) + atof(arr2) + atof(arr3) + atof(arr4);

	printf("The sum  after conversion is: %f\n", sum);
	return 0;
}
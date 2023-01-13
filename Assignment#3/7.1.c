#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 50
int main()
{
	char array1[SIZE];
	char array2[SIZE];
	char array3[SIZE];
	char array4[SIZE];
	int sum;

	printf("STRING TO INTEGERS AND THEIR SUM:\n");

	printf("Enter string 1 of integers: ");
	fgets(array1, 50, stdin);


	printf("Enter string 2 of integers: ");
	fgets(array2, 50, stdin);


	printf("Enter string 3 of integers: ");
	fgets(array3, 50, stdin);


	printf("Enter string 4 of integers: ");
	fgets(array4, 50, stdin);

	sum = atoi(array1) + atoi(array2) + atoi(array3) + atoi(array4);
	printf("The sum  after conversion is: %d\n", sum);
	return 0;
}
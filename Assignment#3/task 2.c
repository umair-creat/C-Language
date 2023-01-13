#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int removenagtives(int arr[], int size, int* newSize)
{
	int b[10];
	int counter = 0;
	int temp = 0;
	for (int i = 0;i < size;i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0;arr[i] > 0;i++)
	{
		counter++;
	}
	printf("\n");
	*newSize = counter;
	return *newSize;
}
int main()
{
	int array[5];
	int size = 0;
	int counter;
	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &array[i]);
	}
	counter = removenagtives(array, 5, &size);
	for (int i = 0;i < counter;i++)
	{
		printf("%d\t", array[i]);
	}
	return 0;
}

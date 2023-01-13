#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double checkmedian(int array[], int size, int count)
{
	int mid, mid1;
	double ave;
	int num = count;
	if (num % 2 == 0)
	{
		mid = num / 2;
		mid1 = mid - 1;
		ave = *(array+mid1) + *(array+mid) / 2;
	}
	else
	{
		mid = num / 2;
		mid1 = mid + 0.5;
		ave = *(array + mid1);
	}
	
	return ave;
}
int main()
{
	int array[20];
	int size,count=0;
	double median;
	printf("enter the size of array:");
	scanf("%d", &size);
	printf("enter the values:\n");
	for (int i = 0;i < size;i++)
	{
		scanf("%d", &array[i]);
		count++;
	}
	printf("{");

	for (int i = 0;i < size;i++)
	{
		printf("%d  ",array[i]);
		
	}
	printf("}");
	printf("\n");
	median=checkmedian(array, size,count);
	printf("Median is:%lf", median);
	return 0;
}
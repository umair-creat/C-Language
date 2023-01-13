#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int checkfrequent(int a[],int size,int s)
{
	int count1 = 0;
	int b = 0;
	int frequent = 0;
	for (int i = 0;i < s;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	for (int i = 0;i < s;i++)
	{
		count1 = 1;
		for (int j = i+1;j < s;j++)
		{
			if (a[j] == a[i])
			{
				count1++;
				if (count1 > frequent)
				{
					frequent = a[j];
				}
			}
		}
		
	}
	return frequent;

}

int main()
{
	int frequent = 0;
	int array[20];
	int size = 0;
	printf("Enter the size of array:");
	scanf("%d", &size);
	for (int i = 0;i < size;i++)
	{
		printf("Enter a number %d: ", i + 1);
		scanf("%d", &array[i]);
	}
	frequent=checkfrequent(array, 20,size);
	int frequency = (array, 20, size);
	printf("Most frequent is %d:", frequent);
	
	return 0;
}
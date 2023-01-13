#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int getTotal(int arr[][3],int size)
{
	int total = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			total += arr[i][j];
		}
	}
	return total;
}
int getAverage(int arr[][3],int size)
{
	float average;
	int total=0;
	int count = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			total += arr[i][j];
			count++;
		}
	}
	average = total/count;
	return average;

}
int getrowtotal(int arr[][3],int size)
{
	int rowtotel = 0;
	for (int i = 0;i < 3;i++)
	{
		rowtotel = 0;
		for (int j = 0;j < 3;j++)
		{
			rowtotel += arr[i][j];
		}
		printf("The sum of row total is:%d\n", rowtotel);
		
	}
	return rowtotel;
}
int getcoloumtotal(int arr[][3],int size)
{
	int coloumtotel = 0;
	for (int i = 0;i < 3;i++)
	{
		coloumtotel = 0;
		for (int j = 0;j < 3;j++)
		{
			coloumtotel += arr[j][i];
		}
		printf("The sum of coloum total is:%d\n", coloumtotel);

	}
	return coloumtotel;
}
int gethighestinrow(int arr[][3],int size)
{
	int highest = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (arr[i][j] > highest)
			{
				highest = arr[i][j];
			}
		}
	}
	return highest;

}
int getlowestinrow(int arr[][3],int size)
{
	int lowest=arr[0][0];
	for (int i = 0;i < 3;i++)
	{
		
		for (int j = 0;j < 3;j++)
		{
			if (arr[i][j] < lowest)
			{
				lowest = arr[i][j];
			}
		}
	}
	return lowest;
}
int main()
{
	int array[3][3];
	int rowtotal, coloumtotal, total = 0;
	float ave;
	int highest;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	total = getTotal(array, 3);
	ave = getAverage(array, 3);
	highest = gethighestinrow(array, 3);
	int lowest = getlowestinrow(array, 3);
	printf("The total value is %d.\n", total);
	printf("The total average is %.2f.\n", ave);
	rowtotal = getrowtotal(array, 3);
	printf("The recent row totel value is %d\n ", rowtotal);
	coloumtotal = getcoloumtotal(array, 3);
	printf("The recent coloum totel value is %d\n ", coloumtotal);
	printf("The highest number in row is %d\n", highest);
	printf("The lowest number in row is %d\n", lowest);
}
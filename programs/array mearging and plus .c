#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 5
void merage(int b1[], int c1, int b2[], int c2, int b3[], int c3)
{
	int  i = 0;
	for (i;i < size;i++)
	{
		printf("Enter a number:");
		scanf("%d", &b1[i]);
		b3[i] = b1[i];
	}
	int k = i;
	for (int a = 0;a < size;a++)
	{
		printf("Enter a 2nd array number.");
		scanf("%d", &b2[a]);
		b3[k] = b2[a];
		k++;
	}
	int sum = 0;
	printf("After mearging two arrays.\n");
	int g = 0, l = 0;
	for (int d = 0;d < 10;d++)
	{
	
		printf("%d\n", b3[d]);
		sum = sum + b3[d];
	}
	printf("totel is %d", sum);
}
int main()
{
	int a1[size], a2[size], a3[10];
	merage(a1, size, a2, size, a3, 10);
	return 0;
	//////////////////////////////////////////////////////////////////////////////////////////////////////
							   //array1 then 2nd again 1st then 2nd and so on//
}/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 5
void merage(int b1[], int c1, int b2[], int c2, int b3[], int c3)
{
	int  i=0;
	for (i;i < size;i++)
	{
		printf("Enter a number:");
		scanf("%d", &b1[i]);
		//b3[i] = b1[i];
	}
	int k =i;
	for (int a=0;a < size;a++)
	{
		printf("Enter a 2nd array number.");
		scanf("%d", &b2[a]);
		//b3[k] = b2[a];
		k++;
	}

	printf("After mearging two arrays.\n");
	int g = 0,l=0;
	for (int d = 0;d < 10;d++)
	{
		if(d%2==0)
		{
			b3[d] = b1[l];
			printf("%d\n", b3[d]);
			l++;
		}
		else
		{
			b3[d] = b2[g];
			printf("%d\n", b3[d]);
			g++;
		}
	}
}
int main()
{
	int a1[size],a2[size],a3[10];
	merage(a1, size, a2, size, a3, 10);
	return 0;
}*/
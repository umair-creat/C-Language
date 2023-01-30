#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void reverse(char[], char[]);
int main()
{
	char name[10] = { ' ' };
	char copyName[10] = { ' ' };
	printf("Enter the name: ");
	scanf("%9s", name);
	reverse(name, copyName);
	return 0;
}
void reverse(char first[], char sec[])
{
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		sec[i] = first[j];
		j++;
		printf("%c", sec[i]);
	}

}
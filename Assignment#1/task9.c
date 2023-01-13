#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int rollno, numofsemester, semster;
	float GPA,CGPA = 0, sumofgpa = 0;
	semster = 1;
	do
	{
		printf("Enter your roll no:");
		scanf("%d", &rollno);
	} while (rollno < 0);
	do
	{
		printf("Enter number of semster:");
		scanf("%d", &numofsemester);
	} while (numofsemester < 0 && numofsemester>8);
	for (int i = 0; i < numofsemester; i++)
	{
		printf("Enter you semster %d GPA:", semster);
		scanf("%f", &GPA);
		sumofgpa += GPA;
		semster++;
	}
	
	CGPA = sumofgpa / numofsemester;
	printf("***************************Result Card*************************\n");
	printf("Roll no:%d\n", rollno);
	printf("CGPA:%.2f", CGPA);
	return 0;
}
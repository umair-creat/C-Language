
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isValid(int start, int last)       //For validation value is true or false
{
	if (start < last)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int numberOfEmployee()           //For get employe value form user
{
	int totalEmployee;
		printf("Please enter total number of employees in the company : ");
		scanf("%d",&totalEmployee);
		printf("\n");
	return  totalEmployee;
}
int absenteesOfEmployees(int work)       //For get absent days of employees from user
{
	int absentees;
	int totalAbsentees = 0;
	for (int i = 1; i <= work; i++)
	{
		do
		{
			printf("Please enter total absentes days in a year of %d employee :", i);
			scanf("%d",&absentees);
		} while (isValid(absentees, 0) == 0);
		printf("\n");
		totalAbsentees = totalAbsentees + absentees;   //For totel absent of days
	}
	printf("Totel days absent:%d\n\n", totalAbsentees);
	return totalAbsentees;
}
double averageAbsents(double totalAbsentees, double totalWorkers)  //This function to calculate the average of absentees
{
	double average;
	average = totalAbsentees / totalWorkers;
	return average;
}
void display(double ave)          //to display
{
	printf("Total average is %.2lf", ave);
}
int main()   //For calling function
{
	float average = numberOfEmployee();
	display(averageAbsents(absenteesOfEmployees(average), (average)));
	return 0;
}

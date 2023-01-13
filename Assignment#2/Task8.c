#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// Function to check validition of Radius
int isValid(double number, double start, double end)
{
    if (number >= start && number<= end)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
double getRadius()
{
    double radius;
    do
    {                 //function to get radius from user
        printf("Please enter the radius of a circle greater then or equal to 10 and less then or equal to 50 : ");
        scanf("%lf", &radius);

    } while (isValid(radius, 10, 50) == 0);
    return radius;
}
//Function to Calculation of area by getting input by using getRadius function 
double calculateArea(double radius)
{
    double radi;
    double* area;
    radi = 3.14 * radius * radius;
    area = &radi;
    return *area;
}
// Function to show/ display area by using area function as input 
void displayArea(double area)
{
    printf("\nThe area of the circle is : %.2lf \n", area);
}
// Main area from which Code start to run
int main()
{
    displayArea(calculateArea(getRadius()));
    return 0;
}
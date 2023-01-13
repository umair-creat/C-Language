#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
void main()
{
	printf("\n");
	for (int side1 = 1; side1 <= 200; side1++) // for side one 
	{
		for (int side2 = 1; side2 <= 200; side2++)  //for side two
		{
			for (int hypotenuse = 1; hypotenuse <= 200; hypotenuse++) //for hypotinous
			{
				if (pow(side1, 2) + pow(side2, 2) == pow(hypotenuse, 2)&&side1>side2) //codition to print all value less then 200
				{
					printf("\t[%d\t+\t%d\t=\t%d]\n",side1,side2,hypotenuse);
				}
			}
		}
	}
}
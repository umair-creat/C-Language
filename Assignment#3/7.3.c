#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char arr1[20];
    char arr2[20];


    printf("Enter the string 1:");
    scanf("%s", arr1);
    printf("Enter the string 2:");
    scanf("%s", arr2);


    int condition= strcmp(arr1, arr2);



    if (condition = 1)
    {
        printf("String one is greater.");
    }
    if (condition = 0)
    {
        printf("String two is greater. ");
    }
    return 0;
}
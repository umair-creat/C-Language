#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char arr1[20];
    char arr2[20];

    int character = 0;
    int counter1 = 0;
    int counter2 = 0;


    printf("Enter the  string one:");
    scanf("%s", arr1);
    printf("Enter the  string two:");
    scanf("%s", arr2);


    for (int i = 0; i != '\0'; i++)
    {
        counter1 = arr1[i];
        counter1++;
    }
    for (int i = 0; i != '\0'; i++)
    {
        counter1 = arr2[i];
        counter2++;
    }
    printf("how many characters you want to compare: ");
    scanf("%d", &character);





    int x = strncmp(arr1, arr2, character);
    if (x > 0)
    {
        printf("first array character is greater ");
    }
    else if (x == 0)
    {
        printf("Both characters are same ");
    }

    else if (x < 0)
    {
        printf("second array character is greater ");
    }
    return 0;
}



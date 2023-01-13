#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    char ch;
    char mood;
    int num = 0, num1 = 11;
    
    do {
        /* Input character from user */
        printf("Enter any character: ");
        scanf("%s", &ch);
        /* Alphabet check */
        if (ch >= '0' && ch <= '9')
        {
            printf("It  is digit.\n", ch);
        }
         else if (ch >= 'A' && ch <= 'Z')
        {
            printf("it is a large alphabet\n");
        }
        else if ((ch >= 'a' && ch <= 'z'))
        {
            printf(" is small alphabet.\n");
        }
        else
        {
            printf(" It is some other character.\n");
        }
        printf("Do you want to continue (Y/N):\n");
        scanf("%s", &mood);
        if (mood == 'n' || mood == 'N')
        {
            num = 11;
        }
        
    } while (num<10);
return 0;
}
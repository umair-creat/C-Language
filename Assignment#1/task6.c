  
// Program to print Twin prime numbers between two ranges
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> // include stdio.h library
int is_prime(int n)
{
    if (n == 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // number is not prime
            return 0;
        }
    }

    // number is prime
    return 1;
}

int main()
{

    int  end=0;
    printf("Enter your end value: \n");
    scanf("%d", &end);

    for (int i = 2; i < end; i++)
    {
        if (is_prime(i) && is_prime(i + 2))
        {
            printf("(%d, %d)\n", i, i + 2);
            i = i + 1;
        }
    }

    return 0; // return 0 to operating system
}


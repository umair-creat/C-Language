#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void rotate(int arr[], int n, int k);

int main()
{
    int arr[] = { 3, 4, 5, 8,7 , 2 , 9 , 1 }, i, k;

    //size of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    //print array
    printf("Given array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n Enter number of position to rotate an array : ");
    scanf("%d", &k);


    //function call
    rotate(arr, n, k);

    //print array after rotation 
    printf("\nRotated array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);

    }

    return 0;
}
//****** FUNCTION ********
void rotate(int arr[], int n, int k)
{
    while (k)
    {
        int temp, i;
        temp = arr[n - 1];
        for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
        k--;
    }

}
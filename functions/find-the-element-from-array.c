#include <stdio.h>

/**
 * find the element from an array
 * programme
 */

int main()
{
    int arr[] = {20, 50, 500, 400, 900, 4, 5};

    int n = 7;

    int data;

    printf("Enter number : ");
    scanf("%d", &data);

    if (find(arr, n, data) == 1)
    {
        printf("Positive");
    }
    else
    {
        printf("nagative");
    }
}

int find(int arr[], int number, int data)
{
    for (int i = 0; i <= number; i++)
    {
        if (arr[i] == data)
            return 1;
        }
    return 0;
}
#include <stdio.h>

int main()
{
    /**
     * Write a C program that prints a multiplication table up of 1 to 10.
     */

    int a, b;

    for (a = 1; a <= 10; a++) // for row
    {
        for (b = 1; b <= 10; b++) // for col
        {
            printf("%d\t", a * b);
        }
        printf("\n"); // Move to the next line after each row
    }
}
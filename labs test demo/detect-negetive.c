#include <stdio.h>

int main()
{
    /**
     * Write a C program that asks the user to input numbers and stops only when the user
     * inputs a negative number. The program should also count how many numbers were
     * entered before the negative number.
     */

    int number, count = 0;

    while (1)
    {
        printf("Enter any nuber: ");
        scanf("%d", &number);

        if (number < 1)
        {
            break;
        }

        count++;
    }

    printf(" %d numbers were entered before the negative number.", count);
}
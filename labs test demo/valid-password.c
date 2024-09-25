#include <stdio.h>
#include <string.h>

int main()
{
    /**
     * Create a C program that continuously asks the user for a password until the correct one
     * is entered. The correct password is "lab123".
     */

    char pass[5];

    while (1)
    {
        printf("Enter password: ");
        scanf("%s", &pass);

        if (strcmp(pass, "lab123") == 0)
        {
            printf("Valid password\n");
            break;
        }
        else
        {
            printf("Invalid password\n");
        }
    }
}
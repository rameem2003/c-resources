#include <stdio.h>

int main()
{
    /**
     * Show value and address of variable
     */
    int number = 1548;                // normal valiable
    printf("Value is %d \n", number); // get the value
    printf("Address is %d", &number); // get the address
}